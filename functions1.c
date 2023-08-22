#include "main.h"

/**
 * _putchar - a function to print a character.
 * @c: the character to print.
 * Return: returns 0;
 */

int _putchar(char c)
{
	write(1, &c, 1);
	return 0;
}


/**
 * rot13 - a function to print a string in rot13 encryption.
 * @str: the string to print.
 * Return: returns the number of printed characters.
 */
int rot13(char *str)
{
	int index;
	int count = 0;

	for (index = 0; str[index] != '\0'; index++)
	{
		if (str[index] >= 97 && str[index] <= 109)
		_putchar(str[index] + 13);

		else if (str[index] >= 110 && str[index] <= 122)
		_putchar(str[index] - 13);

		else if (str[index] >= 65 && str[index] <= 77)
		_putchar(str[index] + 13);

		else if (str[index] >= 78 && str[index] <= 90)
		_putchar(str[index] - 13);

		else
		_putchar(str[index]);

		count++;
	}

	return (count);
}




/**
 * rev_str - a function to reverse a string.
 * @str: the string to reverse.
 * Return: returns the number of printed characters.
 */
int rev_str(char *str)
{
	int count = 0;
	int index;

	for (index = 0; str[index] != '\0'; index++)
	count++;

	for (index--; index >= 0; index--)
	_putchar(str[index]);

	return (count);
}





/**
 * to_binary - a function to print a number in binary.
 * @x: the number to print in binary.
 * Return: returns the number of printed characters.
 */
int to_binary(unsigned int x)
{
	int binary[32];
	char str[32];
	int index;
	int count = 0;

	for (index = 0; x > 0; index++)
	{
		binary[index] = x % 2;
		str[index] = binary[index] + '0';
		x = x / 2;
		count++;
	}

	for (index--; index >= 0; index--)
	_putchar(str[index]);

	return (count);
}
