#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char str[20];
    printf("Enter the char:");
    gets(str);
    printf("len of string %d\n",strlen(str));
    printf("size of string %d\n",sizeof(str));
}
