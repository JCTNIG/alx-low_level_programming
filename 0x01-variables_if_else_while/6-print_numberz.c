#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints integar 0 - 10
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = '0';

	while (n < '9')
	{
		putchar(n);
		n++;
	}
	putchar('\n');

	return (0);
}
