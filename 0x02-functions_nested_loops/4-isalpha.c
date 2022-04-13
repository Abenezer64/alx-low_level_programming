#include "main.c"

/**
 * _isalpha - checks if upper case
 * @c: character to be checked
 *
 * Return: 1 if upper case, otherwise 0
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') ||
(c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
