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
			write(1, format, 1);
		}
		else
		{
			format++;
			_handle(&b, args, *format);
		}
	}
	va_end(args);
	write(1, b.d, b.l);
	return (b.l);
}
