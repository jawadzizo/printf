#include "main.h"

/**
 * print_string - a function to print a string.
 * @str: the string to print.
 * Return: returns the number of printed characters.
 */
int print_string(char *str)
{
	int index;
	int count = 0;

	for (index = 0; str[index] != '\0'; index++)
	{
		_putchar(str[index]);
		count++;
	}

	return (count);
}



/**
 * to_octal - a function to print a number in octal.
 * @x: the number to print in octal.
 * Return: returns the number of printed characters.
 */
int to_octal(unsigned int x)
{
    int octal [32];
	char str[32];
	int count = 0;
    int index;

    for (index = 0; x != 0; index++)
    {
        octal[index] = x % 8;
		str[index] = octal[index] + '0';
        x /= 8;
		count++;
    }

    for (index--; index >= 0; index--)
	{
		_putchar(str[index]);
	}

	return (count);
}



/**
 * int_to_string - a function to convert integers to strings.
 * @x: the number to convert to a string.
 * Return: returns the number of printed characters.
 */
int int_to_string(int x)
{
    int array [32];
	int count = 0;
    int index;
	char str[32];

    for (index = 0; x != 0; index++)
    {
		if (x < 0)
		{
			_putchar('-');
			count++;
			array[index] = x % 10;
			array[index] = -array[index];
			str[index] = array[index] + '0';
			x /= 10;
			x = -x;
		}

		else
		{
			array[index] = x % 10;
			str[index] = array[index] + '0';
			x /= 10;
		}

		count++;
    }

    for (index--; index >= 0; index--)
    _putchar(str[index]);

	return (count);
}



/**
 * u_to_string - a function to convert unsigned integers to strings.
 * @x: the number to convert to a string.
 * Return: returns the number of printed characters.
 */
int u_to_string(unsigned int x)
{
    int array [32];
	int count = 0;
    int index;
	char str[32];

    for (index = 0; x != 0; index++)
    {
        array[index] = x % 10;
		str[index] = array[index] + '0';
        x /= 10;
		count++;
    }

    for (index--; index >= 0; index--)
    _putchar(str[index]);

	return (count);
}
