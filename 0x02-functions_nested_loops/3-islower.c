#include <stdio.h>
#include <ctype.h>

/**
* main - Entry point
*
*/
int main()
{
char ch;
printf("Enter an alphabet: ");
scanf("%c", &ch);
if (isupper(ch))
{
printf(" '%c' is upper case", ch);
}
else if (islower(ch))
{
printf(" '%c' is lower case", ch);
}
return 0;
}
