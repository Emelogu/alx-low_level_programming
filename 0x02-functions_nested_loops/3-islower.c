#include "main.h"
/**
 * print alphabet - prints lowercase letters
 * @c: is the int for function argument
 * Return: Always 0 (Success)
 */
int _islower(int c)
{	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
