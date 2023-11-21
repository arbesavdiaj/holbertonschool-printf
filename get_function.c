#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * get_function - selects the correct function to perform the operation asked
 * by the user.
 * @c: operator passed as argument to the program.
 * Return: a pointer to the function that corresponds to the operator given as
 * a parameter. Example: get_function('c') will return a pointer to the
 * function print_char. If no operator matches the char given, the function
 * returns NULL.
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
