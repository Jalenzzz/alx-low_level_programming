#include "main.h"

/**
 * _isupper - checks whether a character is uppercase or not.
 * @c: The character to be checked
 *
 * Return: 1 if the character is uppercase, 0 otherwise.
 */
int _isupper(int c)
{
	/* Check if it's in the range of uppercase letters */
	if (c >= 65 && c <= 90)
	{
		/* Return 1 if the character is uppercase */
		return (1);
    }
		/* Return 0 if the character is not uppercase */
		return (0);
}
