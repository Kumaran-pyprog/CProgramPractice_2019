//pointer pgm
#include<stdio.h>
#include<stdlib.h>
int main()
{
char str[]="India";
char *ptr=str;
printf("%d\n",sizeof(ptr));//4
printf("%d\n",sizeof(str));//6
printf("%s\n",ptr);//India
printf("%p\n",ptr);//0060FEF6
printf("%c\n",*ptr++);//I
printf("%p\n",ptr);//0060FEF6
printf("%s\n",ptr);//ndia
printf("%c\n",++*ptr);//O
printf("%s\n",str);//Iodia
printf("%c\n",*--ptr);//I
printf("%c\n",*++ptr);//O
printf("%c\n",*ptr++);//O
printf("%c\n",*ptr--);//d

}
