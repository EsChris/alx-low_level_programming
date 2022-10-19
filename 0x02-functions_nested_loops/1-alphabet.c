#include "main.h"

/**
 *main - This program print_alphabet in lower case followed by a new line
 *Description: print_alphabet,  Written by EsChris
 *Return: 0
 **/

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
