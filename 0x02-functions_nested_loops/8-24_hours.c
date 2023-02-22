#include "main.h"
/**
 * jack_bauer - function that prints every minute of the day, 24 hour clock
 * h = hour, mn = minutes
 * / 10 allows second digit to rotate
 * for loop breaks before passing 24:00
 * Return: 24 hour clock line by line
 */
void jack_bauer(void)
{
	int h, mn;

	for (h = 0; h < 24; h++)
	{
		for (mn = 0; mn < 60; mn++)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((mn / 10) + '0');
			_putchar((mn % 10) + '0');
			_putchar('\n');
		}
	}
}
