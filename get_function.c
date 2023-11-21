#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * get_function - selects the correct function
 * @c: character to be matched
 * Return: returns a pointer to the function
 */

int (*get_function(char c))(va_list)
{
	int i = 0;
	print prints[] = {
		{"c", print_char},
		{"s", print_string},
		{"i", print_int},
		{"d", print_int},
		{NULL, NULL}
	};

	while (prints[i].id)
	{
		if (*prints[i].id == c)
			return (prints[i].print);
		i++;
	}

	return (NULL);
}
