#include "main.h"

/**
 * _strcmp - Compares two strings.
 *
 * @s1: The first string to be compared.
 * @s2: The second string to be compared.
 *
 * Return: If s1 < s2, the negative difference of the first unmatched char,
 *         If s1 == s2, 0.
 *         If s1 > s2, the positive difference of the first unmatched char.
 */
int _strcmp(char *s1, char *s2)
{
		while (*s1 && *s2 && *s1 == *s2)
		{
			s1++;
			s2++;
		}

		return (*s1 - *s2);
}
