#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (success)
 */

int main(void)
{
	print("Size of a char: %zu byte(s)\n", sizeof(char));
	print("Size of an int: %zu byte(s)\n", sizeof(int));
	print("Size of a long long int: %zu byte(s)\n", sizeof(long int));
	print("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
	print("Size of a float: %zu byte(s)\n", sizeof(float));
	return (0);
}
