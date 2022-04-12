#include "main.h"

/**
 * main - Entry point
 *
 * print_alphabet - prints a to z 10 times
 * Return: 0
 */
void print_alphabet_x10(void)
{
char l;
int t;

for (t = 0; t < 10; t++)
{
for (l = 'a'; l <= 'z'; l++)
_putchar(l);
_putchar('\n');
}
}
