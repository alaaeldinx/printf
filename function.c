#include "main.h"

/**
 * 
 * 
 * 
 */
 int hand_char(va_list arg, char buffer[])
 {
	int count = 0;
	char c = va_arg(arg, int);

	return (write_char(c, buffer));
 }

 int hand_per (va_list arg, char buffer[])
 {
	UNUSE (arg);
	char per = '%';
	return (write_char(per, buffer));
 }

 int hand_str(va_list arg, char buffer[])
 {
	char *str = va_arg(arg, char*);
	write_string(str, buffer);

 }