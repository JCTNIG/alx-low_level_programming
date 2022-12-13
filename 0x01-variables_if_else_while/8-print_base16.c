#include <stdio.h>
#include <stdlib.h>

/**
 * main - print base 16 numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int nm = '0';
	char al = 'a';

	while (nm <= '9')
	{
		putchar(nm);
		nm++;
	}
	while (al <= 'f')
	{
		putchar(al);
		al++;
	}
	putchar('\n');

	return (0);
}
