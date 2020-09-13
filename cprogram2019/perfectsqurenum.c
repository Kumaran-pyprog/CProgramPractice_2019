//check the number is perfect square or not?
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define MAX 150
int main()
{
int num,sq;
printf("Enter the number from 1 to %d:\n",MAX);
for(num=1;num<=MAX;num++)
    {
    sq=sqrt(num);
    if(sq-(int)sq==0.0f)
        {
        printf("%d is a perfect square num\n",sq);
        }
    else
        {
        printf("%d is not a perfect square num\n",sq);
        }
    }
}
