//generic pointer
#include<stdio.h>
#include<string.h>
int main()
{
int a=259;
char c='a';
float f=12.34;
double d=234.12;

void *vp;
vp=&a;
printf("%d\n",*(int *)vp);
vp=&c;
printf("%c\n",*(char *)vp);
vp=&f;
printf("%f\n",*(float *)vp);
vp=&d;
printf("%lf\n",*(double *)vp);
}
