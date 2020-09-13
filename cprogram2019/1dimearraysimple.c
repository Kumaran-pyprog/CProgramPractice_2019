//onedimensional array
#include<stdio.h>
//void display_array(int,int);
//void read_array(int,int);
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
    int i;
    for(i=0;i<size;i++)
        {
        printf("array val is [%d] = %d\n",i,a[i]);
        }
    }
int main()
{
int a[5];
printf("Enter the array val:\n");
read_array(a,5);
display_array(a,5);
}
