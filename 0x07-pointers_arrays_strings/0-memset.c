#include "main.h"

/**
 * _memset - Filles the first n bytes of the memory area
 * pointed to by @s with the constant byte @c.
 * @s: A pointer to the memory area to be filled.
 * @c: The characer to fill the memory area with.
 * @n: The number of bytes to to be filled.
 * description _memset: over there
 * Return: A pointer to the filled memory area @s.
 */

void *_memset(void *s, int c, size_t n)
{
	unsigned int index;
	unsigned char *memory = s, value = c;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}
