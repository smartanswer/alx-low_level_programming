#include "main.h"
/**
 * print_alphabet_x10 - the program to print 10 times the alphabet
 *
 */
void print_alphabet_x10(void)
{
char ch;
int n;
n = 1;
while (n < 11)
{
ch = 'a';
while (ch <= 'z')
{
_putchar(ch);
ch++;
}
_putchar('\n');
n++;
}
}
