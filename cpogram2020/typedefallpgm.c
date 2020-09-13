#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#pragma pack(2)
typedef struct stu{
    int a;
    char ch;
    float f;
}var;
typedef union stu2{
    int m;
    char ch;
}svar;
int main(){
    var v={12,'M',10.23};
    printf("sizeof structure is %d\n",sizeof(v));//10byte
    printf("a=%d\n",v.a);//12 typedef is used to provide alias name or alternative names to  existing datatypes.
    printf("ch=%c\n",v.ch);
    printf("f=%f\n",v.f);
    //typedef union
    printf("sizeof union is %d\n",sizeof(svar));//4 bytes
    svar sv={23,'k'};
    printf("m=%d\n",sv.m);
    printf("ch=%c\n",sv.ch);
}
