/**
 * swap_int - function to swap integers
 * @a: first reference parameter
 * @b:second reference parameter
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
