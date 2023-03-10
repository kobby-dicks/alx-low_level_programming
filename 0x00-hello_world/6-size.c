#include <stdio.h>

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

	printf("Size of a char: %lu byte(s)\n", (unsigned long) sizeof(a));
	printf("Size of an int: %lu byte(s)\n", (unsigned long) sizeof(x));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long) sizeof(y));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long) sizeof(z));
	printf("Size of a float: %lu byte(s)\n", (unsigned long) sizeof(b));

	return (0);
}
