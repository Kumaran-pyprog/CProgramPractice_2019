//array of pointer
#include<stdio.h>
#include<string.h>
int main()
{
int i,j;
int a[2][3]={11,22,33,44,55,66};
int *ptr[2];
for(i=0;i<2;i++)
    {
    ptr[i]=a[i];
    }
for(i=0;i<2;i++)
    {
    for(j=0;j<3;j++)
        {
        printf("%d\t",ptr[i][j]);
        }
    printf("\n");
    }

}
