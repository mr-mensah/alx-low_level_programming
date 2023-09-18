#include "main.h"
#include <stdio.h>
/**
  * _isupper - checks for the case of the letter
  * @c: character
  * Return: 1
  */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}

	return (0);
}
