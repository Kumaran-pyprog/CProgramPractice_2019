#include<stdio.h>
int main(){
    int choice;
    int a,b,c,add,sub,mul,mod,max,min,num;
    printf("1.Arithmetic operation\n");
    printf("2.Assignment operation\n");
    printf("3.logical operation\n");
    printf("4.Bitwise operation\n");
    printf("5.Ternary operation\n");
    printf("6.Relational operation\n");
    printf("7.prepostincrement operation\n");
    printf("8.while opertion\n");
    printf("9.do while opertion\n");
    printf("for loop opertion\n");
    printf("Enter the choice:\n");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            //Arithmatic operation
            printf("Enter the a&b:");
            scanf("%d%d",&a,&b);
            add=a+b;
            printf("add val is %d\n",add);
            sub=a-b;
            printf("sub val is %d\n",sub);
            mul=a*b;
            printf("mul val is %d\n",mul);
            mod=a%b;
            printf("mod val is %d\n",mod);
            break;
        case 2:
            //assingnment operartion
            printf("Enter the a&b:");
            scanf("%d%d",&a,&b);
            int x=a;int y=b;
            printf("x=%d y=%d\n",x,y);
            break;
        case 3:
            //logical operation
            printf("Enter the a&b:");
            scanf("%d%d",&a,&b);
            printf("logical a&&b=%d\n",a&&b);
            printf("logical a||b=%d\n",a||b);
            printf("logical !a=%d !b=%d\n",a,b);
            break;
        case 4:
            //bitwise operation
            printf("Enter the a&b:");
            scanf("%d%d",&a,&b);
            printf("Bitwise a&b=%d\n",a&b);
            printf("Bitwise a|b=%d\n",a|b);
            printf("Bitwise ~a=%d\n",~a);
            printf("Bitwise a<<2=%d\n",a<<2);
            printf("Bitwise b>>2=%d\n",b>>2);
            break;

        case 5:
            printf("Enter the a&b:");
            scanf("%d%d%d",&a,&b,&c);
            max=(a>b)?((a>c)?a:c):((b>c)?b:c);
            printf("max val is %d\n",max);
            min=(a<b)?((a<c)?a:c):((b<c)?b:c);
            printf("min val is %d\n",min);
            break;

        case 6:
            printf("Enter the a&b:");
            scanf("%d%d",&a,&b);
            printf("Relational a<b=%d\n",a<b);
            printf("Relational a>b=%d\n",a>b);
            printf("Relational a<=b=%d\n",a<=b);
            printf("Relational a>=b=%d\n",a>=b);
            printf("Relational a==b=%d\n",a==b);
            printf("Relational a!=b=%d\n",a!=b);
            break;
        case 7:
            printf("Enter the a&b:");
            scanf("%d%d",&a,&b);
            printf("preincrement ++a=%d\n",++a);
            printf("a=%d\n",a);
            printf("preincrement ++b=%d\n",++b);
            printf("b=%d\n",b);
            printf("preincrement a++=%d\n",a++);
            printf("a=%d\n",a);
            printf("preincrement b++=%d\n",b++);
            printf("b=%d\n",b);
            printf("decreincrement --a=%d\n",--a);
            printf("a=%d\n",a);
            printf("decreincrement --b=%d\n",--b);
            printf("b=%d\n",b);
            printf("decreincrement a--=%d\n",a--);
            printf("a=%d\n",a);
            printf("decreincrement b--=%d\n",b--);
            printf("b=%d\n",b);
            break;

        case 8:
            printf("Enter the num:");
            scanf("%d",&num);
            //while operation
            int i=1;
            while(i<num){
                printf("%d\n",i);
                i=i+1;
            }
            break;



        case 9:
            printf("Enter the a:");
            scanf("%d",&a);
            int fact=1;
            //do while operation
            do {
                fact=a*fact;
                a=a-1;
            }while(a>0);
            printf("fact val %d\n",fact);
            break;
        case 10:
            printf("Enter the a:");
            scanf("%d",&a);
            //for loo operation
            int count=0;
            for(count=0;a!=0;count++){
                a=a/10;

            }
            printf("count the digits %d\n",count);
            break;



        default:
            printf("Invalid Enter!!! Try Again!!!");
            break;
    }
}
