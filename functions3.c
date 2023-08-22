#include "main.h"


/**
 * to_HEXA - a function to print a number in hexa(using uppercase).
 * @x: the number to print in octal.
 * Return: returns the number of printed characters.
 */
int to_HEXA(unsigned int x)
{
    int hexa [32];
	int count = 0;
    int index;

    for (index = 0; x != 0; index++)
    {
        hexa[index] = x % 16;

		if (hexa[index] < 10)
		hexa[index] = hexa[index] + 48;

		else
		hexa[index] = hexa[index] + 55;

        x /= 16;

		count++;
    }

    for (index--; index >= 0; index--)
    _putchar(hexa[index]);

	return (count);
}



/**
 * to_hexa - a function to print a number in hexa(using lowercase).
 * @x: the number to print in octal.
 * Return: returns the number of printed characters.
 */
int to_hexa(unsigned int x)
{
    int hexa [32];
	int count = 0;
    int index;

    for (index = 0; x != 0; index++)
    {
        hexa[index] = x % 16;

		if (hexa[index] < 10)
		hexa[index] = hexa[index] + 48;

		else
		hexa[index] = hexa[index] + 87;

        x /= 16;

		count++;
    }

    for (index--; index >= 0; index--)
    _putchar(hexa[index]);

	return (count);
}



/**
 * to_HEXA - a function to print a long integers in hexa(using lowercase).
 * @x: the number to print in octal.
 * Return: returns the number of printed characters.
 */
int to_hexaa(long int x)
{
    int hexa [32];
	int count = 0;
    int index;

    for (index = 0; x != 0; index++)
    {
        hexa[index] = x % 16;

		if (hexa[index] < 10)
		hexa[index] = hexa[index] + 48;

		else
		hexa[index] = hexa[index] + 87;

        x /= 16;

		count++;
    }

    for (index--; index >= 0; index--)
    _putchar(hexa[index]);

	return (count);
}



/**
 * print_null - a function to print (null) if there is no string.
 * Return: returns the number of printed characters.
 */
int print_null()
{
	int index;
	char *str = "(null)";
	int count = 0;

	for (index = 0; str[index] != '\0'; index++)
	{
		_putchar(str[index]);
		count++;
	}

	return (count);
}
