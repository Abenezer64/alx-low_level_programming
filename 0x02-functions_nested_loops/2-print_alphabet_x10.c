#include "main.h"

/**
 * print_alphabet_x10 - prints a to z 10 times, inlower case
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
