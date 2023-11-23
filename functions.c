#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_char - prints a character
 * @list: list of arguments from _printf
 *
 * Return: number of characters printed
 */
int print_char(va_list list)
{
	char temp = va_arg(list, int);

	_putchar(temp);

	return (1);
}

/**
 * print_string - prints a string
 * @list: list of arguments from _printf
 *
 * Return: number of characters printed
 */
int print_string(va_list list)
{
	char *temp = va_arg(list, char *);
	int i = 0;
	int length = 0;
	char *nul = "(null)";

	if (temp)
	{
	while (temp[i] != '\0')
	{
		_putchar(temp[i]);
		length++;
		i++;
	}
	}
	else
	{
		while (nul[i] != '\0')
		{
			_putchar(nul[i]);
			length++;
			i++;
		}
	}
	return (length);
}
/**
 * print_int - prints an integer
 * @list: list of arguments from _printf
 *
 * Return: number of characters printed
 */
int print_int(va_list list)
{
	long int number = (long int) va_arg(list, int);
	long int l = 1;
	long int t = number;
	int r = 1;

	if (number < 0)
	{
		_putchar('-');
		r++;
		t = t * -1;
		number = number * -1;
	}
	while (t > 9)
	{
		t = t / 10;
		l = l * 10;
		r++;
	}
	while (l > 0)
	{
		_putchar('0' + (number / l) % 10);
		l = l / 10;
	}
	return (r);
}

