vi main.h
#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include "main.h"

/**
 *print_alphabet
 */

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ++ch)
		_putchar(ch);
	_putchar('\n');
}

