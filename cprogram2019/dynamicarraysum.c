//sum using dynamic memory
#include<stdio.h>
#include<stdlib.h>
int main()
{
float *n1,*n2,*sum;
n1=(float *)malloc(sizeof(float));
n2=(float *)malloc(sizeof(float));
sum=(float *)malloc(sizeof(float));
printf("Enter the n1&n2:\n");
scanf("%f%f",n1,n2);
*sum=*n1 + *n2;
printf("Sum val is %.2f\n",*sum);
free(n1);
free(n2);
free(sum);

}
