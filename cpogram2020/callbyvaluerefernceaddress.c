//call by value
#include<stdio.h>
#include<stdlib.h>
void callbyvalueval(int);
void swap(int*,int *);
void change(int b[]);
int main(){
    //call by value
    int a,c,d;
    printf("Enter the a val:");
    scanf("%d",&a);
    callbyvalueval(a);
    //call by Reference
    printf("Enter the a&b val:");
    scanf("%d%d",&c,&d);
    swap(&c,&d);
    printf("After swap a=%d b=%d\n",c,d);
    int b[3]={21,22,33};
    printf("Before swap b[0]=%d b[1]=%d b[2]=%d\n",b[0],b[1],b[2]);
    change(b);
    printf("After swap b[0]=%d b[1]=%d b[2]=%d\n",b[0],b[1],b[2]);


}
void callbyvalueval(int x){
    x=x+20;
    printf("output val is %d\n",x);
}

void swap(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;

}
void change(int b[]){
    b[0]=12;b[1]=13;b[2]=14;
}
