# printf Project

## Description

This project is a custom implementation of the C standard library function, `printf`. Our function, `_printf`, produces output according to a format by writing output to stdout, the standard output stream.

## Features

Our `_printf` handles the following conversion specifiers:

- `c` : Character
- `s` : String of characters
- `%` : A % followed by another % character will write a single % to the stream.
- `d` : Signed decimal integer
- `i` : Signed decimal integer

## Compilation

Compile with: gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c


## Usage

Include the "main.h" header file and call the function as follows:
```c
#include "main.h"

int main(void)
{
    _printf("Hello, %s!\n", "World");
    return (0);
}

Authors

Arbes Avdiaj and Ralf Semi 

