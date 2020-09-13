//smmallest element using pointer
#include<stdio.h>
#include<stdlib.h>
#define MAX 6
void main()
{
int *ptr,small,i,arr[50];
ptr=&arr[0];//ptr=&arr[0
printf("Enter the array element:\n");
for(i=0;i<MAX;i++)
    {
    scanf("%d",ptr);
    ptr++;
    }
/*for(i=0;i<MAX;i++,ptr++)
    {
    printf("%d\t",*ptr);
    }*/
ptr=&arr[0];
small=*ptr;
for(i=0;i<MAX;i++,ptr++)
  {
  if(*ptr < small)
        {
        small=*ptr;
        }
  }
printf("\nDisplay smallest element of the array %d\n",small);
}

