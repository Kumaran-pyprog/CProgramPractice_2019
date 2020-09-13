#include<stdio.h>
#include<math.h>
int main()
{
int j;
int i=2;
printf("Matrix of 2:\n");
for(j=1;j<=16;j++)
    {
    printf("%d x %d=%d\n",j,i,(j*i));
    }
}
