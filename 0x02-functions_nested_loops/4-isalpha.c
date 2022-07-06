#include "main.h"

/**
 * _isalpha - checks for alphabetic characters
 * @c : character checking paramet
 * Return: 1 if succesful, else 0
 */

int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}
