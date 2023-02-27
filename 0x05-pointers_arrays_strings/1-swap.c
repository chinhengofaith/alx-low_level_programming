/**
 * swap_int - function to swap integers
 * @a: first reference parameter
 * @b:second reference parameter
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int *temp
		;
	temp = a;
	a = b;
	b = temp;
}

