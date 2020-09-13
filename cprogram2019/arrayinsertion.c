//insert the array
#include<stdio.h>
void insert_array(int a1[],int);
void display_array(int a1[],int);

int main()
{
int size,i;
printf("Enter the array size:\n");
scanf("%d",&size);
int a[size],a1[size];
printf("Enter the array val:\n");
for(i=0;i<size;i++)
    {
    scanf("%d",&a[i]);
    }
for(i=0;i<size;i++)
    {
    printf("The array val is [%d] = %d\n",i,a[i]);
    }
insert_array(a1,size);
display_array(a1,size);
}
void insert_array(int a1[],int size)
    {
    int i;
    printf("Enter the array:\n");//initialize value at 6
    for(i=6;i<size;i++)
        {
        scanf("%d",&a1[i]);
        }
    }
void display_array(int a1[],int size)
    {
    int i=0;
    for(i=6;i<size;i++)
        {
        printf("The inserted array val is %d\n",a1[i]);
        }
    }
