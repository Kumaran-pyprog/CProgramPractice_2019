//structure using function
#include<stdio.h>
#include<string.h>
void fun(struct var *);
struct var{
int a;
char name[30];
float f;
}v;
int main()
{
struct var v;
fun(&v);
}
void fun(struct var *v)
    {
        scanf("%d %s %f",&v->a,v->name,&v->f);
        printf("a val is %d name=%s f=%f\n",v->a,v->name,v->f);

    }
