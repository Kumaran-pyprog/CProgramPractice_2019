//2dimensional array
#include<stdio.h>
int main()
{
int i,j,row,col;
printf("Enter the array size:\n");
scanf("%d%d",&row,&col);
int a[row][col];
printf("Enter the array val:\n");
for(i=0;i<row;i++)
    {
    for(j=0;j<col;j++)
        {
        scanf("%d",&a[i][j]);
        }
    }
printf("The 2dimen array val is:\n");
for(i=0;i<row;i++)
    {
    for(j=0;j<col;j++)
        {
        printf("[%d]\t",a[i][j]);
        }
        printf("\n");
    }
}
