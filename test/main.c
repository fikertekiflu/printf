#include <limits.h>
#include <stdio.h>
#include "main.h"
int _printf(const char *format, ...);
/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	char age = '2';

    printf("this is the real rose %c is \n",age);
    _printf("hello this is my custom prinf\n");
    _printf("hello this is my age is %c", age);

    return (0);
}
