#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * 	   On error, -1 is returned, and errno is set appropriately.
 *
 */
int _putchar(char c)
{
	return ( write(1, &c, 1));
}

vi main.h
#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

int _putchar(char c);
void print_alphabet(void);
void print_alphabet_x10(void);
int _islower(int c);
int _isalpha(int c);
int print_sign(int n);
int _abs(int);
int print_last_digit(int);
void jack_bauer(void);
void times_table(void);
int add(int, int);
void print_to_98(int n);
void print_times_table(int n);
#endif /* MAIN_H */

TASK 0
vi 0-putchar.c
#include "main.h"
#include <string.h>

/**
 *main - Entry point
 *
 *Description: prints _putchar using putchar prototype
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	char str[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ++ch)
		_putchar(str[ch]);
	_putchar('\n');

	return (0);
}

TASK 1
#include "main.h"

/**
 *print_alphabet
 */

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ++ch)
		_putchar(ch);
	_putchar('\n')
}

TASK 2

