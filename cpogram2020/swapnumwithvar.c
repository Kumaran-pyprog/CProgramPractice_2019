#include<stdio.h>
int main(){
    int a,b,temp;
    printf("Enter the val a&b:");
    scanf("%d%d",&a,&b);
    printf("Before swap a=%d b=%d\n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("After swap a=%d b=%d\n",a,b);
    int x=3,y=2;
    int res=x*y+(y=10);
    printf("y val %d\n",res);


}
