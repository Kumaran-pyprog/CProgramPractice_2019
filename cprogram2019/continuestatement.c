#include<stdio.h>
#include<stdlib.h>
void main()
{
long int i;
for(i=10;i>=1;i--)
    {
    printf("Before the continue: \n");
    if(i>5) continue;
    printf("%d\n", i);
    }

}
