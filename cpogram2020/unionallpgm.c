#include<stdio.h>
#include<stdlib.h>
#include<string.h>
union stu{
    int a;
    char ch;
    char str[10];
    float b;
    double d;
};
int main(){
    union stu var={10,'A',"Ashok",10.2f,23.45};
    printf("a=%d\n",var.a);
    //var.ch='B';
    printf("ch=%c\n",var.ch);
    //strcpy(var.str,"Ashok");
    printf("str=%s\n",var.str);
    //var.b=11.2f;
    printf("b=%f\n",var.b);
    //var.d=9.8;
    printf("d=%lf\n",var.d);
}
