//swap hexadecimal num using nibble bits
#include<stdio.h>
int main()
{
int a,c,d;
printf("Enter the hexadecimal num:\n");
scanf("%x",&a);
printf("Before swap %x\n",a);
c=a&0x0f;
d=a&0xf0;
c=c<<4;
d=d>>4;
a=c|d;
printf("Afterswap hex val is %x\n",a);


}
