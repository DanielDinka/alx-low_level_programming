#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *word = "Holberton";

	while (*word)
	{
		_putchar(*word);
		word++;
	}
	_putchar('\n');

	return (0);
}
