#include "main.h"

/**
 * print_char - prints a character
 * @char_list: list of arguments from _printf
 *
 * Return: number of characters printed
 */
int print_char(va_list char_list)
{
	char letter = va_arg(char_list, int);

	putchar(letter);

	return (1);
}

/**
 * print_string - prints a string
 * @string_list: list of arguments from _printf
 *
 * Return: number of characters printed
 */
int print_string(va_list string_list)
{
	char *str;
	int i;

	str = va_arg(string_list, char*);

	for (i = 0; str[i] != '\0'; i++)
		putchar(str[i]);

	return (i);
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
		putchar('-');
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
		putchar('0' + (number / l) % 10);
		l = l / 10;
	}
	return (r);
}

