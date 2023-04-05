#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse,
 * Return: Always 0 (Success)
 */
int main(void)
{
	char an;

	for (an = 'z'; an >= 'a'; an--)
	{
		putchar(an);
	}
	putchar('\n');
	return (0);
}
