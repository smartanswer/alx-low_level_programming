#include <stdio.h>
/**
 * main - The program that print all combination
 *
 * Return: always 0 (success)
 */
int main(void)
{
int i, n, m;
for (i = 0; i < 8; i++)
{
for (n = 1; n < 9; n++)
{
for (m = 2; m < 10; m++)
{
if (i < n && n < m)
{
putchar(i + '0');
putchar(n + '0');
putchar(m + '0');
if (n != 8 || m != 9)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
