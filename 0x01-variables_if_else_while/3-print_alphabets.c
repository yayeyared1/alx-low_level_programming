#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main -> assign to the variable n each time it is excuted and prints out
 *fsdfs
 *Return: always 0
*/

int main(void)
{
int ch;
for (ch = 97; ch <= 122; ch++)
{
putchar(ch);
}
for (ch = 65; ch <= 90; ch++)
{
putchar(ch);
}
putchar(10);
return (0);
}
