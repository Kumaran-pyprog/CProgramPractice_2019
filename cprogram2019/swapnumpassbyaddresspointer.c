//swap the num using pass by address pointer
#include<stdio.h>
#include<stdlib.h>
void swap(int *,int *);
int main()
{
int a,b;
printf("Enter the number a,b:\n");
scanf("%d%d",&a,&b);
printf("Before swap a=%d,b=%d\n",a,b);
swap(&a,&b);
printf("After swap a=%d,b=%d\n",a,b);
}
void swap(int *a,int *b)
    {
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    }
