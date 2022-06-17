#include <stdio.h>
#include "main.h"

/**
*main - Entry point
* Return: Nothing
*/
void print_to_98(int n)
{
if (n <= 98)
for (; n <= 98; n++)
{
printf("%d", n);
if (n == 98)
continue;
printf(", ");
}
printf("\n");
}
else
{
for (; n >= 98; n--)
{
printf("%d", n);
if (n == 98)
continue;
printf(", ");
}
printf("\n");
}
}
