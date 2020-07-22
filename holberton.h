#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
int _printf(const char *format, ...);
int _putchar(char c);
int (*find_function(char letter))(va_list list);
int valid_format(char c);
int print_char(va_list list);
int print_string(va_list list);
int print_integer(va_list list);
int print_rev(va_list list);
int print_rot13(va_list params);
int print_bin(va_list list);
/**
  *struct typeformat - struct typeformat
  *@format: format to print
  *@function: function to execute
*/
typedef struct typeformat
{
	char format;
	int (*function)(va_list);
} _formats;
#endif /* _HOLBERTON_H_ */
