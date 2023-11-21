#include "main.h"

int putss(char *str)
{
	int count = 0;
	while (str[count] != '\0')
	{
		_putchar(str[count]);
		count++;
	}
	return (count);
}
