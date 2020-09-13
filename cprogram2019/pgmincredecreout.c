#include<stdio.h>
#include<stdlib.h>
int main( )
{
	int a = 0, b = 0,x;
	x = ++a && ++b;
	printf("a = %d b = %d",a,b);
	printf("\n x = %d ",x);
}
