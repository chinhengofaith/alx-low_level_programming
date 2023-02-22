#include "main.h"
/**
 * print_last_digit -  function to print the last digit of a number
 * @nld: number's last digit result
 * Return: value of the last digit
 */
int print_last_digit(int nld)
{
	int pldig;

	pldig = (nld % 10);

	if (pldig < 0)
	{
		pldig = (-1 * pldig);
	}

	_putchar(pldig + '0');
	return (pldig);
}
