#include "holberton.h"

int print_integer(va_list params)
{
        int integer = va_arg(params, int);
        int lengthi, num = 0;
        int mult = 1;

        if (integer < 0)
        {
                lengthi = _putchar('-');
                num = integer * -1;
        }
        else
                num = integer;
        while (num / mult >= 10)
        {
                mult = mult * 10;
        }
        while (mult != 0)
        {
                lengthi = _putchar('0' + num / mult);
                num = num % mult;
                mult = mult / 10;
        }
        return (lengthi);
}
