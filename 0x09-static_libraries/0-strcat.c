#include "main.h"

/**
* _strcat - check the code
* @dest: First argument
* @src: Second argument
* Return: a pointer of the resulting string
*/

char *strcat(char *dest, char *src)
{
int i, j;

i = 0;
while (dest[i] != '\0')
i++;
/*i -= 1;*/
for (j = 0; src[j] != '\0'; j++)
{
dest[i] = src[j];
i++;
}
dest[i] = '\0';
return (dest);
}
