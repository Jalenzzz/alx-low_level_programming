#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase
 *
 * Description: Uses _putchar function to print each letter of the alphabet
 *              in lowercase followed by a newline character
 *
 * Return: void
 */
void print_alphabet(void)
{
    char c;

    for (c = 'a'; c <= 'z'; c++)
    {
        _putchar(c);
    }

    _putchar('\n');
}

