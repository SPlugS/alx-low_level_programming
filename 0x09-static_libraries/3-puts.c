#include "main.h"
/**
 * _puts - prints a string out to stdout.
 * str: string to be orinted
 * _putchar: prints a new line
 * Return: Always 0 (Succes)
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
