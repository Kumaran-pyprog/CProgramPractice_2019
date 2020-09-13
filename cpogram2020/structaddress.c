#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void fun(char *);
int main(){
    char name[20];
    printf("Enter the name:");
    gets(name);
    fun(&name);
}
void fun(char *v){
    printf("you Entered Name is %s\n",v);
}
