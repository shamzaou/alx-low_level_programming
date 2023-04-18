#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

/**
 * malloc_checked - allocates memory using malloc
 * @b: unsigned int
 *
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b);
/**
 * string_nconcat - concatenates two strings
 * @s1: pointer to char
 * @s2: pointer to char
 * @n: unsigned int
 *
 * Return: pointer to char
 */

char *string_nconcat(char *s1, char *s2, unsigned int n);
/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: memory area to to which n bytes of src will be copied
 * @src: memory area from which n bytes will be copied
 * @n: number of bytes to be copied
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n);
/**
 * _calloc - allocates memory for an array
 * @nmemb: unsigned int
 * @size: unsigned int
 *
 * Return: pointer to array
 */
void* _calloc(unsigned int nmemb, unsigned int size);

/**
 * _memset - fills memory with a constant byte
 * @s: memory area to be filled
 * @b: constant byte to fill the memory area
 * @n: the first n bytes of memory to be filled
 *
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n);

/**
 * array_range - creates an array of integers
 * @min: int
 * @max: int
 *
 * Return: pointer to int
 */

int* array_range(int min, int max);
#endif
