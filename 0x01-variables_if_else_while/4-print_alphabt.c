#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all alphabet letters except q and e
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char CH = 'a';

	while (CH <= 'z')
	{
		if (CH == 'e' || CH == 'q')
			CH++;
		putchar(CH);
		CH++;
	}
	putchar('\n');

	return (0);
}
