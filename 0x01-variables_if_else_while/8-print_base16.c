#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print numbers of base16 in lowercase
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int d = 48;

	while (d <= 102)
	{
		putchar(d);

		if (d == 57)
			d = d + 39;
		d++;
	}
	putchar('\n');

	return (0);
}
