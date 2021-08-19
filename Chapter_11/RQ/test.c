#include <stdio.h>
int main(void)
{
char str1[] = "gawsie";

char * ps;

ps = str1;

printf("%c\n", *ps--);

printf("%c\n", *ps);

return 0;
}
