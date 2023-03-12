#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * number_check - checks if a given char is number or not
 * @a: char to be checked
 * Return: 1, if its a number, else 0
 */
int number_check(char *a)
{
	int b, num, len;

	b = 0;
	num = 0;
	len = strlen(a);
	while (b < len)
	{
		if (a[b] < '0' || a[b] > '9')
		{
			return (-1);
		}
		else
			num = num * 10 + (a[b] - '0');
		b++;
	}
	return (num);
}
/**
 * main - program to add positive numbers
 * @argc: arguement count
 * @argv: array of pointers to arguement strings
 * Return: result of addition or 1
 */
int main(int argc, char *argv[])
{
	int i, number, sum;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		number = number_check(argv[i]);
		if (number == -1)
		{
			printf("Error\n");
			return (1);
		}
		sum = sum + number;
	}
	printf("%d\n", sum);
	return (0);
