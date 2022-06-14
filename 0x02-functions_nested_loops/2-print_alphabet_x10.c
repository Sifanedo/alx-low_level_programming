#include "main.h"
#include <stdio.h>

/**
* main - Entry point
* Return: Always 0 (Success)
*/
void print_alphabet_x10(void)
{
char ch;
int i;
   
for (i = 1; i <= 10; i++)
{
putchar('\n'); 
for (ch = 'a'; ch <= 'z'; ch++)
putchar(ch);
}
}
