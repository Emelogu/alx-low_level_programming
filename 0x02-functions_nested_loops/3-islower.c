#include "main.h"
/**
 * print alphabet - prints lowercase letters
 * @c: is the int that will be for the argument of the function
 * Return: Always 0 (Success)
 */
int _islower(int c)

{	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
