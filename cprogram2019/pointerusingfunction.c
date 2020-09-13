//pointer using function
#include<stdio.h>
#include<stdlib.h>
void fun(int [],int);
int main()
{
int i,size;
printf("Enter the size:\n");
scanf("%d",&size);
int a[size];
printf("Enter the array:\n");
for(i=0;i<size;i++)
    {
    scanf("%d",&a[i]);
    }
for(i=0;i<size;i++)
    {
    printf("%d\n",a[i]);
    }
fun(a,size);
for(i=0;i<size;i++)
    {
     printf("%d\n",a[i]);
    }
}
void fun(int *ptr,int size)
    {
    int i;
    for(i=0;i<size;i++)
        {
        *ptr=*ptr+10;
         ptr++;
        }
    }
