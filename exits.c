#include "shell.h"

/**
 **_strncpy - copies a str
 *@dest: the destination str to be copied to
 *@src: the source str
 *@n: the amount of char to be copied
 *Return: the concatenated str
 */
char *_strncpy(char *dest, char *src, int n)
{
	int k, j;
	char *s = dest;

	k = 0;
	while (src[k] != '\0' && k < n - 1)
	{
		dest[k] = src[k];
		k++;
	}
	if (k < n)
	{
		j = k;
		while (j < n)
		{
			dest[j] = '\0';
			j++;
		}
	}
	return (s);
}

/**
 **_strncat - concatenates two str
 *@dest: the first str
 *@src: the second str
 *@n: the amount of bytes to be maximally used
 *Return: the concatenated str
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	char *s = dest;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (j < n)
		dest[i] = '\0';
	return (s);
}

/**
 **_strchr - locates a char in a str
 *@s: the str to be parsed
 *@c: the char to look for
 *Return: (s) a pointer to the memory area s
 */
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
			return (s);
	} while (*s++ != '\0');

	return (NULL);
}

