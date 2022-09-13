#include "main.h"
/**
 * _isalpha - checks for alphabetic characters
 * c: is a letter
 * RETURN: 1 if c is a letter
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z' || (c >= 'A' && c <= 'Z'));
}
