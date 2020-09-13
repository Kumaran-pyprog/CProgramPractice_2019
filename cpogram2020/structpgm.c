//structure program
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct group{
    int a;//4
    char ch;//1
    char str[20];//20
    float b;//4
    double d;//8

}var;
int main(){
    //find the size of the structure
    struct group var;
    printf("sizeof(var):%d\n",sizeof(var));//40
    //How to access the structure
    printf("Enter the a val:");
    scanf("%d",&var.a);
    fflush(stdin);
    printf("Enter the ch val:");
    scanf("%c",&var.ch);
    fflush(stdin);
    printf("Enter the str val:");
    gets(var.str);
    printf("Enter the b val:");
    scanf("%f",&var.b);
    printf("Enter the d val:");
    scanf("%lf",&var.d);
    //display all the value
    printf("a val=%d\n",var.a);
    printf("ch val=%c\n",var.ch);
    printf("str val=%s\n",var.str);
    printf(" float b val=%f\n",var.b);
    printf(" double d val=%lf\n",var.d);



}

