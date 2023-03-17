#include <stdio.h>
/**
 * main - The program that print all possible combination single digit
 *
 * Return: always 0 (success)
 */
int main(void)
{
int i;
for (i = 0; i < 10; i++)
{
if (i == 9)
putchar(i + '0');
else
{
putchar(i + '0');
putchar(',');
putchar(' ');
}
}
return (0);
}
