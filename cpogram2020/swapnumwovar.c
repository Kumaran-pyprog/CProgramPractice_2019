#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the number a&b:");
    scanf("%d%d",&a,&b);
    printf("Before swap a=%d b=%d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swap a=%d b=%d\n",a,b);
    //use xor operation
    printf("Before swap a=%d b=%d\n",a,b);
    a^=b;
    b^=a;
    a^=b;
    printf("After swap a=%d b=%d\n",a,b);


}
