#include <sdtio.h>

/**
 *  main - This is a script that prints outs the sizes of various data types 
 *
 *  Description - The data types considered in this script includes the following:
 *  char
 *  int 
 *  long int 
 *  long long int 
 *  float
 *
 * Return 0 (Success)
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
	printf("Size of int: %lu byte(s)\n", (unsigned long) sizeof (x));
	printf("Size of long int: %lu byte(s)\n", (unsigned long) sizeof(y));
	printf("Size of long long int: %lu bytes(s)\n", (unsigned long) sizeof(z));
	pintf("Size of float: %lu bytes(s)\n", (unsigned long) sizeof(b));

	return (0)
}
