#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0
 */
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == 'q' || i == 'e')
			continue;
		else
			putchar(i);
	}
	putchar('\n');
	return (0);
}
