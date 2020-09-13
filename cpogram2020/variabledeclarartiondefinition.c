#include<stdio.h>
int main(){
    int x;//variable declaration
    int y=10;//variable definition
    x=20;
    printf("val of y=%d and y=%d\n",x,y);
    int a,b;
    printf("Enter the a&b val:");
    scanf("%d%d",&a,&b);
    int c=a*b;
    printf("output val %d ",c);
    int z=1;
    print("z val is %d\n",z);
    int d=10;
    printf("d val %p\n",&d);//0060FFE0
    int e=25;
    printf("e val %p\n",&e);//0060FFE6
    float f=10.23;
    printf("f val %p\n",&f);//0060FFE7

}

