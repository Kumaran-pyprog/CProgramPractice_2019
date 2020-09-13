//Convert entire small letter into capital letter
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
char str[1000];
printf("Enter the character:\n");
gets(str);
printf("displays the uppercase letter\n");
printf("%s",strupr(str));
}
