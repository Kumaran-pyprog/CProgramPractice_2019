#include<stdio.h>
int main(){
    //arithmetic operator(+,-,*,/,%)
    int a,b;
    printf("Enter the val of a&b:\n");
    scanf("%d%d",&a,&b);
    printf("add val %d\n",a+b);
    printf("sub val %d\n",a-b);
    printf("mul val %d\n",a*b);
    printf("div val %d\n",a/b);
    printf("mod val %d\n",a%b);
    //assignment operator(=)
    printf("a= val %d\n",a);
    //Relational operator (==,<,>,<=,>=,!=)
    printf("a==b val %d\n",a==b);
    printf("a<b val %d\n",a<b);
    printf("a>b val %d\n",a>b);
    printf("a<=b val %d\n",a<=b);
    printf("a>=b val %d\n",a>=b);
    printf("a!=b val %d\n",a!=b);
    //logical opertor (&&,||,!)
    printf("a&&b val %d\n",a&&b);
    printf("a||b val %d\n",a||b);
    printf("a!=b val %d\n",a!=b);
    //Bitwise opertor(<<,>>)
    printf("a<<2 val is %d\n",a<<2);
    printf("b<<2 val is %d\n",b<<2);
    printf("a>>2 val is %d\n",a>>2);
    printf("b>>2 val is %d\n",b>>2);
    //shorthand operator(a+=1,b+=1)
    printf("a+=2 val is %d\n",a+=2);
    printf("b+=2 val is %d\n",b+=2);
    //comma opertor(a,b,c)
    int x=(11,12.5,'A','a',10);//
    printf("x val is %d\n",x);
    //Increment opertor (++a,--a,a++,a--)
    printf("++a val is %d\n",++a);
    printf("b++ val is %d\n",b++);
    printf("--a val is %d\n",--a);
    printf("b-- val is %d\n",b--);

}
