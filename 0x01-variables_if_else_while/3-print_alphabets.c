#include <stdio.h>
/**
 * main - The program print alphabet in uppercase
 *
 * Return: always 0 (success)
 */
int main(void)
{
int ch;
for (ch = 'a'; ch <= 'z'; ch++)
putchar(ch);
for (ch = 'A'; ch <= 'Z'; ch++)
putchar(ch);
putchar('\n');
return (0);
}
