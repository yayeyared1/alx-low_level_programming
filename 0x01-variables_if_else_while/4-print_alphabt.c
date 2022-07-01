#include <stdio.h>

/**
*main -> Prints the last digit of a randomly generated
*asdas
*Return: Always 0
*/
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch != 'q' && ch != 'e')
{
putchar(ch);
}
}
putchar(10);
return (0);
}
