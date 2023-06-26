/**
 * swap_int - swap two numbers
 * @a: operand 1
 * @b: operand 2
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
