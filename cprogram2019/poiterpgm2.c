//pointer
#include<stdio.h>
#include<stdlib.h>
int main()
{
char str[]="cranes";
char *ptr=str;
printf("%c\n",++*ptr);//dranes
printf("%s\n",str);//dranes
printf("%c\n",*(ptr++));//dranes
printf("%s\n",ptr);//ranes
printf("%s\n",str);//ranes


}
