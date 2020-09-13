//storage class specifier
#include<stdio.h>
extern int var=0;
int n=23;
int main(){
//find the default value of auto,register,static,extern storage class.
//auto storage-stack segment
auto int x;
printf("auto storage default val %d\n",x);//garbage value
x=10;
printf("auto storage val %d\n",x);//10
//register storage-stack segment
register int y;
printf("Register storage default  val %x\n",y);//garbage value
y=0x9;
printf("Register storage val %x\n",y);//10
//static storage-data segment
static int z;
printf("static storage default val %d\n",z);//0
z=10;
printf("static storage val %d\n",z);//10
//extern storage -data segment
printf("Extern storage default val %d\n",var);//0
var=10;
printf("Extern storage val %d\n",var);//10
//global variable
printf("global val %d\n",n);
//local variable
int n=25;
printf("local variable %d\n",n);



}

