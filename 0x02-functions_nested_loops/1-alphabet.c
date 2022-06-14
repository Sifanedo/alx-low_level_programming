#include "main.h"
#include <stdio.h>

/**
*print_alphabet - prints the alphabet,
*in lowercase,
*followed by a new line
*Return: Always 0 (Success)
*/
void main(void)
{
char ch;

for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
putchar('\n');
}
