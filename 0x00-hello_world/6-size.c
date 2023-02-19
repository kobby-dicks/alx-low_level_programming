#include <sdtio.h>

/**
 * main - This is a script that prints outs the sizes of various data.
 *
 * Description - The data types considered in this script include:
 * char
 * int
 * long int
 * long long int
 * float
 *
 * Return: success 0
 *
 */

int main(void)
{
	char a;
	int x;
	long int y;
	long long int z;
	float b;

	printf("Size of char: %lu byte(s)\n", (unsigned long) sizeof(a));
	printf("Size of int: %lu byte(s)\n", (unsigned long) sizeof(x));
	printf("Size of long int: %lu byte(s)\n", (unsigned long) sizeof(y));
	printf("Size of long long int: %lu bytes(s)\n", (unsigned long) sizeof(z));
	printf("Size of float: %lu bytes(s)\n", (unsigned long) sizeof(b));

	return (0);
}
