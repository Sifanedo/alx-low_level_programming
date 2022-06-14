#include "main.h"
#include <stdio.h>

/**
* main - check the code.
*
* Return: Always 0.
*/
int main(void)
{
char ch;
int i;
   
for (i = 1; i <= 10; i++)
{
putchar('\n'); 
for (ch = 'a'; ch <= 'z'; ch++)
putchar(ch);
}
return (0);
}
