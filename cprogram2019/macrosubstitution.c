//Macro substitution-This operation replace macroname with its associated macro body
#include<stdio.h>
#define SQR(X) x*x
int main()
{
int x;
printf("Enter the val of x:\n");
scanf("%d",&x);
printf("output of %d\n ",SQR(X)+4);
//printf("output of %d\n",SQR(X+2));
//printf("Output of %d\n",SQR(X+3));
}
