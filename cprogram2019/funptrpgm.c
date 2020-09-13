#include<stdio.h>
#include<stdlib.h>
void add(int a,int b)
    {
    printf("add val is %d\n",a+b);
    }
void sub(int a,int b)
    {
    printf("sub val is %d\n",a-b);
    }
void mul(int a,int b)
    {
    printf("mul val is %d\n",a*b);
    }
void divi(int a,int b)
    {
    printf("div val is %d\n",a/b);
    }
int main()
{
void (*fun[4])(int,int)={add,sub,mul,divi};
fun[0](5,4);
fun[1](15,5);
fun[2](12,3);
fun[3](125,5);
}
