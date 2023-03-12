#include <stdio.h>
/**
 * main - program that prints the number of arguments passed into it
 * @argv: The character to print
 * @argc: The character to print
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
