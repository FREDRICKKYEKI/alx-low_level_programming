#include "alx.h"

/**
 * main - prints 10 times the alphabet, in lowercase,
 * followed by a new line.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	for (int i = 0; i<10; i++)
	{
		for (int j = 97; j <= 122; j++)
		{
			_putchar(j);
		}
	_putchar('\n');
	}
}

int main(void)
{
    print_alphabet_x10();
    return (0);
}
