//pointer dereferencing
#include<stdio.h>
#include<stdlib.h>
int main()
{
char ch='A';
char *pch=&ch;
char *ppch=&pch;
printf("%c\n",ch);
printf("&ch=%u,*pch=%u\n",&ch,*pch);
printf("&pch=%u\n",&pch);
printf("%u\n",*ppch);
}
