//write a program from 1 to 100 using while loop
#include<stdio.h>
int main()
{
int n,i=0,sum=0;
printf("Enter the number;\n");
scanf("%d",&n);
printf("i val is :\n");
while(i<=n)
    {
    sum+=i;
    printf("%d\n",i);
    i++;
    }
printf("suma val is %d\n",sum);

}
