#include "main.h"

/**
 * _strncat - concatenates two strings with n bytes
 * @dest: destination.
 * @src: source.
 * @n: amount of bytes used from src.
 * Return: the pointer to dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int m;
	int q;

	m = 0;
	while (dest[m] != '\0')
	{
		m++;
	}

	q = 0;
	while (q < n && src[q] != '\0')
	{
		dest[m] = src[q];
		m++;
		q++;
	}
	dest[m] = '\0';

	return (dest);
}

