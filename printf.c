#include "main.h"



/**
 * _printf - a variadic function similar to printf.
 * @formart: the format string.
 * Return: returns the printed characters.
 */


int _printf(const char * const format, ...)
{
	va_list args;
	int i;
	unsigned int u;
	char *str;
	char c;
	int index;
	long int li;
	int print_count = 0;
	int count;

	va_start(args, format);

	if (format == NULL)
	return (-1);

	for (index = 0; format[index] != '\0'; index++)
	{
		if (format[index] == '%')
		{
			index++;

			if (format[index] == '\0')
			{
				return (-1);
			}

			if (format[index] == 'c')
			{
				c = va_arg(args, int);
				if (c == '\0')
				continue;
				_putchar(c);
				print_count++;
			}

			else if (format[index] == 'i' || format[index] == 'd')
			{
				i = va_arg(args, int);
				if (i == '\0')
				{
					_putchar('0');
					print_count++;
				}
				else
				{
					count = int_to_string(i);
					print_count += count;
				}
			}

			else if (format[index] == 'u')
			{
				u = va_arg(args, unsigned int);
				count = u_to_string(u);
				print_count += count;
			}

			else if (format[index] == 'b')
			{
				u = va_arg(args, int);
				count = to_binary(u);
				print_count += count;
			}

			else if (format[index] == 'o')
			{
				u = va_arg(args, int);
				count = to_octal(u);
				print_count += count;
			}

			else if (format[index] == 'x')
			{
				u = va_arg(args, unsigned int);
				count = to_hexa(u);
				print_count += count;
			}

			else if (format[index] == 'X')
			{
				u = va_arg(args, unsigned int);
				count = to_HEXA(u);
				print_count += count;
			}

			else if (format[index] == 'p')
			{
				li = va_arg(args, long int);
				_putchar('0');
				_putchar('x');
				print_count += 2;
				count = to_hexaa(li);
				print_count += count;
			}

			else if (format[index] == 's')
			{
				str = va_arg(args, char*);

				if (str == NULL)
				count = print_null();

				else
				count = print_string(str);

				print_count += count;
			}

			else if (format[index] == 'R')
			{
				str = va_arg(args, char*);
				count = rot13(str);
				print_count += count;
			}

			else if (format[index] == 'S')
			{
				str = va_arg(args, char*);

				for (index = 0; str[index] != '\0'; index++)
				{
					if (str[index] < 32 || str[index] >= 127)
					{
						_putchar('\\');
						_putchar('x');
						_putchar('0');
						print_count += 3;
						to_HEXA(str[index]);
					}
					else
					_putchar(str[index]);

					print_count++;
				}
			}

			else if (format[index] == 'r')
			{
				str = va_arg(args, char*);

				if (str == NULL)
				{
					_putchar(format[index - 1]);
					_putchar(format[index]);
					print_count += 2;
				}

				else
				count = rev_str(str);

                print_count += count;
			}

			else if (format[index] == '%')
			{
				_putchar('%');
                print_count++;
			}

			else if (format[index] == '+')
			{
				index++;
				if (format[index] == 'i' || format[index] == 'd')
				{
					i = va_arg(args, int);

					if (i == '\0')
					{
						_putchar('0');
						print_count++;
					}

					else if (i >= 0)
					{
						_putchar('+');
						print_count++;
						count = int_to_string(i);
						print_count += count;
					}

					else
					{
						count = int_to_string(i);
						print_count += count;
					}
				}
			}

			else if (format[index] == ' ')
			{
				index++;
				if (format[index] == 'i' || format[index] == 'd')
				{
					i = va_arg(args, int);
					if (i == '\0')
					{
						_putchar('0');
						print_count++;
					}

					else if (i >= 0)
					{
						_putchar(' ');
						print_count++;
						count = int_to_string(i);
						print_count += count;
					}

					else
					{
						count = int_to_string(i);
						print_count += count;
					}
				}
			}

			else
			{
				_putchar(format[index - 1]);
				_putchar(format[index]);
                print_count += 2;
			}
		}

		else
        {
			_putchar(format[index]);
        	print_count++;
        }
	}

	va_end(args);

	return (print_count);
}
