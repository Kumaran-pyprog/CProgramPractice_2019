//access the 1D array using pointer
#include<stdio.h>
#include<stdlib.h>
void main()
{
int arr[]={10,13,23,43,55};
int i,*ptr;
ptr=arr;
for(i=0;i<5;i++)
    {
    printf("%d\t",*(arr+i));
    //ptr++;
    }

for(i=0;i<5;i++)
    {
    printf("%d\t",*ptr++);
    //ptr++;
    }
}
