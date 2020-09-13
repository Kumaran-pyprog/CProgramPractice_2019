//how to decimal number to binary
#include<stdio.h>
#include<stdlib.h>
int main()
{
int n,i=0,j,arr[20];
printf("Enter the number: \n");
scanf("%d",&n);
while(n>0)
    {
     arr[i]=n%2;
     n=n/2;
     i++;
    }
printf("The binary val is:\n");
for(j=i-1;j>=0;j--)
    {
    printf("%d",arr[j]);
    }
}
