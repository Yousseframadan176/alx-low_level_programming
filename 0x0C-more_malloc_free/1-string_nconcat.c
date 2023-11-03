#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two, limiting the second string to 'n' bytes.
 * @s1: First string
 * @s2: Second string
 * @n: Maximum number of bytes from s2 to concatenate
 *
 * Return: If the function fails, it should return NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x = 0, y = 0, z;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[x])
		x++;
	while (s2[y] && y < n)
		y++;
	s = malloc(sizeof(char) * (x + y + 1));
	if (s == NULL)
		return (NULL);

	for (z = 0; z < x; z++)
		s[z] = s1[z];
	for (z = 0; z < y; z++)
		s[z + x] = s2[z];
	s[x + y] = '\0';

	return (s);
}
