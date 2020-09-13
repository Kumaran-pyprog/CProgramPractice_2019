//one dimensional array sum
#include<stdio.h>
void read_array(int a[],int size)
    {
    int i;
    for(i=0;i<size;i++)
        {
        scanf("%d",&a[i]);
        }
    }
void display_array(int a[],int size)
    {
    int i,sum=0;
    for(i=0;i<size;i++)
        {
        sum+=a[i];
        printf("The array val is [%d] = %d\n",i,a[i]);
        }
    printf("sum of array is %d\n",sum);

    }
int main()
{
int a[5];
printf("Enter the array:\n");
read_array(a,5);
display_array(a,5);
}
