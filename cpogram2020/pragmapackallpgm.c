#include<stdio.h>
#include<stdlib.h>
struct stu{
    //int a;//4
    //char ch;//4
    //float f;//4
    double d;//8
}var1={33.44};
int main(){
    struct stu var1;
    printf("struct size is %d\n",sizeof(var1));//24
    //printf("size of a is %d\n",sizeof(var1.a));
    //printf("size of ch is %d\n",sizeof(var1.ch));
    //printf("size of f is %d\n",sizeof(var1.f));
    printf("size of d is %d\n",sizeof(var1.d));//8

}
