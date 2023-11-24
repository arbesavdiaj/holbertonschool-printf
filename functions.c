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

	putchar(temp);

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
		putchar(temp[i]);
		length++;
		i++;
	}
	}
	else
	{
		while (nul[i] != '\0')
		{
			putchar(nul[i]);
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
	long int weight = 1;
	long int temp = number;
	int digit = 1;

	if (number < 0)
	{
		putchar('-');
		digit++;
		temp = temp * -1;
		number = number * -1;
	}
	while (digit > 9)
	{
		temp = temp / 10;
		weight = weight * 10;
		digit++;
	}
	while (weight > 0)
	{
		putchar('0' + (number / weight) % 10);
		weight = weight / 10;
	}
	return (digit);
}
