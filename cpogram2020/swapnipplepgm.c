#include<stdio.h>
int main(){
    int a,c,d;
    printf("Enter the hexadecimal val a:");
    scanf("%x",&a);
    c=a&0x0f;
    d=a&0xf0;
    c=c<<4;
    d=d>>4;
    int e=c|d;
    printf("After swap hexadecimal val=0x%x\n",e);

    int a1,c1,d1;
    printf("Enter the hexadecimal val a1:");
    scanf("%x",&a1);
    c1=a1&0x00ff;
    d1=a1&0xff00;
    c1=c1<<8;
    d1=d1>>8;
    int e1=c1|d1;
    printf("After swap hexadecimal val=0x%x\n",e1);

}
