#include <stdio.h>
/**
 * main - The program that print alphabet in lowercase
 *
 * Return: always 0 (success)
 */
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
