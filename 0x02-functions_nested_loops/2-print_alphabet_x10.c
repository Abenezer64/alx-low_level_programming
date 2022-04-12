#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
char l;
int t;

for (t = 0; t < 10; t++)
{
for (l = 'a'; l <= 'z'; l++)
_putchar(l);
}
_putchar('\n');

return (0);
}
