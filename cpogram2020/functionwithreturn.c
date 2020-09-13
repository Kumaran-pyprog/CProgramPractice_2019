#include<stdio.h>
#include<stdlib.h>
int myfunc(int,int);
int main(){
    int a,b;
    printf("Enter the val a:");
    scanf("%d",&a);
    printf("Enter the val b:");
    scanf("%d",&b);
    //call the function
    int z=myfunc(a,b);
    print("output is: %d",z);

}
int myfunc(int x,int y){
    int c;
    c=x+y;
    return c;

}
