#include<stdio.h>
int main(){
    printf("size of unsigned char is %d byte\n",sizeof(unsigned char));//1
    printf("size of signed char is %d byte\n",sizeof(signed char));//1
    printf("size of unsigned int is %d byte\n",sizeof(unsigned int));//4
    printf("size of signer int is %d byte\n",sizeof(signed int));//4
    printf("size of unsigned short int is %d byte\n",sizeof(unsigned short int));//2
    printf("size of signed short int is %d byte\n",sizeof(signed short int));//2
    printf("size of float is %d byte\n",sizeof(float));//4
    printf("size of double is %d byte\n",sizeof(double));//8
    printf("size of long double is %d byte\n",sizeof(long double));//12
    //signed char size  range -128 to 127  unsigned char 0 to 255
    char ch1=127;
    printf("ch1=127 output=%d\n",ch1);//127
    char ch2=128;
    printf("ch2=128 output=%d\n",ch2);//-128
    char ch3=129;
    printf("ch3=129 output=%d\n",ch3);//-127
    char ch4=256;
    printf("ch4=256 output=%d\n",ch4);//0
    //signed char size  range signed char 0 to 255
    unsigned char unsigch1=127;
    printf("ch1=127 output=%d\n",unsigch1);//127
    unsigned char unsigch2=128;
    printf("ch2=128 output=%d\n",unsigch2);//128
    unsigned char unsigch3=129;
    printf("ch3=129 output=%d\n",unsigch3);//129
    unsigned char unsigch4=256;
    printf("ch4=256 output=%d\n",unsigch4);//0
    int a=9;
    printf("++a val is %d\n",++a);//10
    printf("a val is %d\n",a);//10
    char ch10='A';
    printf("size of (65) is %d byte\n",sizeof(65));//4byte
    printf("size of (6.5f) is %d byte\n",sizeof(6.5f));//4 byte
    printf("size of (ch10) is %d byte\n",sizeof(ch10));//1 byte
    printf("size of (6.5) is %d byte\n",sizeof(6.5));//8byte
    printf("size of (ch10,6.5,6.5f) is %d byte\n",sizeof(ch10,6.5,6.5f));//4 byte
    printf("size of (6.5f,ch10,6.5) is %d byte\n",sizeof(6.5f,ch10,6.5));//8bytes
    printf("size of (6.5,6.5f,ch10) is %d byte\n",sizeof(6.5,6.5f,ch10));//12 byte



}
