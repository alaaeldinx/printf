#include "main.h"

/**
 * printint - function to print an integer
 * @args: arguments
 * Return: length of number after converted to string
 */
int printint(va_list args)
{
	int i = 0, num;
	char *num2str = malloc(sizeof(char));

	num = va_arg(args, int);
	itoa(num, num2str, 10, 'd');
	num = strlen(num2str);
	for (; i < num; i++)
		_putchar(num2str[i]);
	free(num2str);

	return (num);
}
/**
 * printbin - function to print numbers in binary format.
 * @arg: argument.
 * Return: number of charecter printed.
 */
int printbin(va_list arg)
{
	unsigned int num;
	char *numstr;
	int len = 0, i;

	num = va_arg(arg, unsigned int);
	if (num == 0)
		return (_putchar('0'));

	numstr = itoa_binary(num);
	for (i = 0; numstr[i] != '\0'; i++, len++)
	_putchar(numstr[i]);

	return (len);
}

/**
 * printunsign - print unsigned int
 * @arg: argument.
 * @base: base.
 * Return: number of charecter printed.
*/
int printunsign(va_list arg, int base)
{
	unsigned int num;
	char *numstr;
	int i, len = 0;

	num = va_arg(arg, unsigned int);
	if (num == 0)
	{
		return (_putchar('0'));
	}

	switch (base)
	{
	case (10):
	numstr = itoao(num, 10, 1, 0);
	break;
	case (8):
	numstr = itoao(num, 8, 1, 0);
	break;
	case(16):
	numstr = itoao(num, 16, 1, 0);
	break;
	case(016):
	numstr = itoao(num, 16, 1, 1);
	break;
	default:
	break;
	}

	for (i = 0; numstr[i] != '\0'; i++, len++)
		_putchar(numstr[i]);
	return (len);
}
