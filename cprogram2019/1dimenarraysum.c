//onedimensional array
#include<stdio.h>
int main()
{
int size,i,sum=0;
printf("Enter the size:\n");
scanf("%d",&size);
int a[size];
printf("Enter the array val:\n");
for(i=0;i<size;i++)
    {
    scanf("%d",&a[i]);
    }
for(i=0;i<size;i++)
    {
    sum+=a[i];
    printf("The array val is [%d] = %d\n",i,a[i]);
    }
printf("The sum val is %d\n",sum);

}
