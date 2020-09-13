//swap num
#include<stdio.h>
void swapnumwithvar(int,int);
void swapnumwovar1(int,int);
void swapnumwovar2(int,int);
int main(){
    int a,b;
    printf("Enter the a&b:");
    scanf("%d%d",&a,&b);
    printf("Before swap a=%d and b=%d\n",a,b);
    swapnumwithvar(a,b);
    printf("Before swap a=%d and b=%d\n",a,b);
    swapnumwovar1(a,b);
    printf("Before swap a=%d and b=%d\n",a,b);
    swapnumwovar2(a,b);
}
void swapnumwithvar(int x,int y){
    int temp;
    temp=x;
    x=y;
    y=temp;
    printf("After swap x=%d and y=%d\n",x,y);
}
void swapnumwovar1(int x,int y){
    x=x+y;
    y=x-y;
    x=x-y;
    printf("After swap x=%d and y=%d\n",x,y);
}
void swapnumwovar2(int x,int y){
    x^=y;
    y^=x;
    x^=y;
    printf("After swap x=%d and y=%d\n",x,y);

}
