#include "main.h"

/**
 * _printf - main function of printf project
 * @format: all included formats;
 * Return: length of format.
*/
int _printf(const char *format, ...)
{
	char *empty = "", *perc = "%";
	buffer b;
	va_list args;

	if (format == NULL || format == empty || format == perc)
		return (-1);

	b.l = 0;
	va_start(args, format);
	for (; *format; format++)
	{
		if (*format != '%')
		{
			b.d[b.l++] = *format;
		}
		else
		{
			format++;
			_handle(&b, args, *format);
		}
	}
	va_end(args);
	write(1, &b.d, b.l);
	return(b.l);
}


/**
 * _putchar - prints a char
 * @c: char to print
 * Return: 1 on success, -1 if failed
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}


void _puts(const char *str)
{
	for (; *str; str++)
		_putchar(str);
}
