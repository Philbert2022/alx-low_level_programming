#include "main.h"

/**
* _strcat - check the code
* @dest: First argument
* @src: Second argument
* Return: a pointer of the resulting string
*/

char *_strcat(char *dest, char *src)
{
int i, j;

i = 0;
while (dest[i] != '\0')
{
i++;
}
j = 0;
while (src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
