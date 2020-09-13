//2dimensional sum of two matrix
//2dimen Transpose matrix array
#include<stdio.h>
int main()
{
int i,j,row,col,sum=0;
printf("Enter the array size:\n");
scanf("%d%d",&row,&col);
int a[row][col],b[col][row],c[row][col];
printf("Enter the array val1:\n");
for(i=0;i<row;i++)
    {
    for(j=0;j<col;j++)
        {
        scanf("%d",&a[i][j]);
        }
    }
printf("Enter the array val2:\n");
for(i=0;i<row;i++)
    {
    for(j=0;j<col;j++)
        {
        scanf("%d",&b[i][j]);
        }
    }
printf("The 2dimen array val is:\n");
for(i=0;i<row;i++)
    {
    for(j=0;j<col;j++)
        {
        c[i][j]=a[i][j]+b[i][j];
        }
    }
printf("The 2dimen sum of two array:\n");
for(i=0;i<row;i++)
    {
    for(j=0;j<col;j++)
        {
        printf("%d\t",c[i][j]);
        }
    printf("\n");
    }
}
