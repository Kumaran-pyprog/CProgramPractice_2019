#include<stdio.h>
#include<stdlib.h>
void funcwithargu(int,int);
void main(){
    int a,b;
    printf("Enter the val of a:");
    scanf("%d",&a);
    printf("Enter the val of b:");
    scanf("%d",&b);
    //call the function
    funcwithargu(a,b);

}
void funcwithargu(int x,int y){
    int z;
    z=x+y;
    print("output val is: %d",z);
}

