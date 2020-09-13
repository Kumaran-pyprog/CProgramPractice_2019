//string using dynamic memory
#include<stdio.h>
#include<stdlib.h>
int main()
{
char *ch;
ch=(char *)malloc(20*sizeof(char));
printf("Enter the string:\n");
gets(ch);
printf("Your entered string is %s\n",ch);
}
