#include <stdio.h>
/**
 * main - program that prints all arguments it receives.
 * @argv: The character to print
 * @argc: The character to print
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int a;

	if (argc >= 1)
	{
		for (a = 0; a < argc; a++)
		{
			printf("%s\n", argv[a]);
		}
	}
	return (0);
}
