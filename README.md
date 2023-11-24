# Printf Project

## Description

This repository contains a custom implementation of the printf function, a commonly used function in the C programming language. The printf function is used for formatted output. It allows the programmer to specify the type of data and the representation of that data. Our implementation aims to replicate the functionality of the original printf function, while also providing a learning experience in low-level programming, memory management, and algorithm optimization.

## Features

Our `_printf` handles the following conversion specifiers:

- `c` : Character
- `s` : String of characters
- `%` : A % followed by another % character will write a single % to the stream.
- `d` : Signed decimal integer
- `i` : Signed decimal integer

## Requirements

- GCC compiler
- Basic knowledge of C programming language

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
```c
## Additional Information

When calling _printf("hello %s\n", "world", 1, 2, 3, 4);, the function has no way to know that more arguments were passed, so it will just ignore them. The function will not fail. The user is responsible for calling the functionthe right way.

## Authors

Arbes Avdiaj 
[@arbesavdiaj](https://github.com/arbesavdiaj)

Ralf Semi
[@rifla93](https://github.com/rifla93)
