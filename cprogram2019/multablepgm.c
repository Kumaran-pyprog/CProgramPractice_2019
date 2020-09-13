//multiplication table
#include<stdio.h>
#include<stdlib.h>
int main()
{
int n,i,j;
printf("Enter the number upto the range:\n");
scanf("%d",&n);
printf("Enter the which multiplication table you want:\n");
scanf("%d",&j);
printf("multiplication Table\n");
for(i=1;i<=n;i++)
    {
    printf("%d x %d=%d\n",i,j,(i*j));
    }
}
