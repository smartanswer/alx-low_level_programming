#include <stdio.h>
/**
 * main - The program that print all combination
 *
 * Return: always 0 (success)
 */
int main(void)
{
int i, n;
for (i = 0; i < 10; i++)
{
for (n = 1; n < 10; n++)
{
if (i < n)
{
putchar(i + '0');
putchar(n + '0');
if (i != 0 || n != 10)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
