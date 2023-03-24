#include "variadic_functions.h"

/**
 * sum_them_all -function that Sums all params
 *
 * @n: const unsigned int
 * Return: int sum
 */

int sum_them_all(const unsigned int n, ...)
{

	va_list a;

	unsigned int i;
	int sum = 0;

	va_start(a, n);

	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, unsigned int);
	}

	va_end(a);

	return (sum);

}
