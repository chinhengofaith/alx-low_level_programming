#include <stdio.h>
#include <stdlib.h>

/**
 * main -program to multiply two numbers
 * @argc: arguement count
 * @argv: array of pointers to arguement strings
 * Return: result of multiplication or 1
 */
int main(int argc, char *argv[])
{
	int a, b, res;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	/* atoi convert a string to an int */
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	res = a * b;
	printf("%d\n", res);
	return (0);
}
