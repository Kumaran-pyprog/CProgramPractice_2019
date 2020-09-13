#include<stdio.h>
#include<string.h>
int strlenfun(char []);
void strcpywhilefun(char [],char []);
void strcpyforfun(char [],char []);
void strconcatwhilefun(char [],char []);
void strconcatforfun(char [],char []);
void ptrconcatwhilefun(char *,char *);

int main(){
//size of the string
char str1[]={'a','b','c','\0','k'};
char str2[]="Ashok";
printf("sizeof(str1) is %d\n",sizeof(str1));//5
printf("sizeof(str2) is %d\n",sizeof(str2));//6
printf("string length:\n");
int len1=strlen(str1);
printf("str1=%d\n",len1);
int len2=strlen(str2);//3
printf("str2=%d\n",len2);//5
//strlen using function
char str5[20];
printf("Enter the string:");
gets(str5);
int lenval=strlenfun(str5);
printf("length of the string str5=%d\n",lenval);
char dest[20],src[20];
printf("Enter the src string:");
gets(src);
printf("Enter the dest string:");
gets(dest);
strcpywhilefun(dest,src);
printf("while fun after copy %s\n",dest);
char src2[20],dest2[20];
printf("Enter the src string:");
gets(src2);
printf("Enter the dest string:");
gets(dest2);
strcpyforfun(dest2,src2);
printf("for fun after copy %s\n",dest2);
char str11[20]="C Programming ",str22[20]="is Awesome";
//printf("Enter the str1 string:");
//gets(str1);
//printf("Enter the str2 string:");
//gets(str2);
strconcatwhilefun(str11,str22);
printf("After concatenating %s\n",str11);

//char str33[20]="Welcome to ",str44[20]="Bangalore";
//strconcatforfun(str33,str44);
//printf("After concatenating %s\n",str33);

char str31[20]="Welcome to ",str32[20]="Bangalore";
ptrconcatwhilefun(str31,str32);
printf("After concatenating %s\n",str31);
}
int strlenfun(char str[]){
    int i=0;
    while(str[i]!='\0'){
        i++;
    }
    return i;
}
void strcpywhilefun(char dest[],char src[]){
    int i=0;
    while(src[i]!='\0'){
        dest[i]=src[i];
        i++;
    }
    dest[i]='\0';

}
void strcpyforfun(char dest[],char src[]){
    int i;
    for(i=0;src[i]!='\0';i++){
        dest[i]=src[i];
    }
    dest[i]='\0';

}
void strconcatwhilefun(char str1[],char str2[]){
    int i=0,j=0;
    while(str1[i]!='\0'){
        i++;
    }
    while(str2[j]!='\0'){
            str1[i]=str2[j];
            j++;
            i++;
    }
    str1[i]='\0';
    //return str1;
}
void strconcatforfun(char str1[],char str2[]){
    int i,j;
    for(i=0;str1[0]!='\0';i++);

    for(j=0;str2[j]!='\0';j++,i++){
        str1[i]=str2[j];
    }
    str1[i]='\0';
}
void ptrconcatwhilefun(char *str1,char *str2){
    while(*str1){
        str1++;
    }
    while(*str2){
        *str1=*str2;
        str2++;
        str1++;

    }
    *str1!='\0';
}
