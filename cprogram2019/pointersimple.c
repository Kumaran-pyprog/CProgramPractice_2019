#include<stdio.h>
int main()
{
int a=11;
char ch='a';
char *cptr=&ch;
float f=5.6;
float *fptr=&f;
double d=9.6;
double *dptr=&d;
int *ptr=&a;
printf("The ptr1 val %d\n",a);
printf("The ptr1 val %d\n",*ptr);
printf("The ptr3 val %u\n",&a);
printf("The ptr4 val is %p\n",*ptr);
printf("sizeof ptr %d---->%d\n",sizeof(ptr),sizeof(*ptr));
printf("sizeof ptr %d---->%d\n",sizeof(cptr),sizeof(*cptr));
printf("sizeof ptr %d---->%d\n",sizeof(fptr),sizeof(*fptr));
printf("sizeof ptr %d---->%d\n",sizeof(dptr),sizeof(*dptr));
}
