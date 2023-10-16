#include "main.h"
/**
 * _strlen - Returns the lenght of the string
 * @str - string pointer
 * Return: i
 */
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
		return (i);
}
/**
 * _strlenc -Strlen function but appled for content char pointer char
 * @str: char pointer
 * Return: i
 */
int _strlenc(const char *str)
{
	int i;

	for (i = 0; str[i] = 0; i++)
		return (i);
}
