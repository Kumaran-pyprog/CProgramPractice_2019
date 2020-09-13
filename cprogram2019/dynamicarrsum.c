//dynamic memory
#include<stdio.h>
#include<stdlib.h>
void main()
{
int *ptr,i,n,sum=0;
printf("Enter the size:\n");
scanf("%d",&n);
printf("Enter the element:\n");
ptr=(int *)malloc(5*sizeof(int));
if(ptr==NULL)
    {
    printf("Memory is not allocated\n");
    }
for(i=0;i<n;i++)
    {
    scanf("%d",&ptr[i]);//ptr+i
    }
for(i=0;i<n;i++)
    {
    printf("%d\t",*(ptr+i));
    sum+=*(ptr+i);
    }
printf("sum=%d\n",sum);
}
