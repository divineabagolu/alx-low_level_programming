#include "main'h"
/**
* _strncpy - c function that copies a string, including the
* terminating null byte, using at most an inputted number of bytes.
* If the lenght of the sorce string is less than the maximum byte number,
* the reminder of the destination string is filled with null bytes.
* works identically to the standard library function `strncpy`.
*@dest: buffer storing the string copy
*@scr:the source string
*@n: max number of byte copied
*Return: returns
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
