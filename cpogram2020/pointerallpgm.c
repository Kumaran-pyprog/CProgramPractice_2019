#include<stdio.h>
#include<stdio.h>
#include<string.h>
void arraypointer(int [],int);
void arraypointer2dim(int [],int);
int pointerstringlen(char *);
void pointerstrcopy(char *,char *);
void pointerstrconcat(char *,char *);
void frequencyoccurrance(char *,char);

int main(){
int a=10;
int *ptr=&a;
printf("a=%d\n",a);
printf("a=%u\n",a);
printf("a=%p\n",a);
printf("ptr=%p\n",ptr);
printf("ptr=%u\n",ptr);//address location
printf("*ptr=%d\n",*ptr);
//size of pointer
char str[]="Bangalore";
char *ptr11=str;
printf("Size of str %d\n",sizeof(str));//10
printf("Size of ptr %d\n",sizeof(ptr11));//4
printf("ptr11 %s\n",ptr11);//Bangalore
printf("++*ptr11=%c\n",++*ptr11);//C
printf("ptr11=%s\n",ptr11);//Cangalore
printf("*ptr++=%c\n",*ptr11++);//c
printf("ptr11=%s\n",ptr11);//angalore
char str12[]="India";
int b12=25;
int *ptrval=str12;
char **ptrval2=str12;
printf("str12=%s\n",str12);
printf("ptrval=%s\n",ptrval);
printf("++*ptrval=%c\n",++*ptrval);//J
printf("ptrval=%s\n",ptrval);//Jndia
printf("*ptrval++=%c\n",--*ptrval);//I
printf("ptrval=%s\n",ptrval);//India
printf("*ptrval++=%c\n",(*ptrval--)-8);//A
printf("ptrval=%s\n",ptrval2);//India
char *ptr55[]={"Ashok","Kumar","Ashokkumar"};
int i;
for(i=0;i<3;i++){
    printf("%s\n",ptr55[i]);
}
int arr[]={12,23,44};
arraypointer(arr,3);
//array of pointer
int arr3[2][3]={10,22,23,34,55,77};
int *ptr3[2];
for(int i=0;i<2;i++){
    ptr3[i]=arr3[i];
}
for(int i=0;i<2;i++){
    for(int j=0;j<3;j++){
        printf("%d\t",ptr3[i][j]);
    }
    printf("\n");
}
char strval[20];
printf("Enter the strval:");
gets(strval);
int len=pointerstringlen(strval);
printf("steing legth is %d\n",len);
char str11[100],str21[100];
printf("Enter the str11:");
gets(str11);
pointerstrcopy(str21,str11);
printf("After copy dest=%s\n",str21);
char str31[100],str32[100];
printf("Enter the str31:");
gets(str31);
printf("Enter the str32:");
gets(str32);
pointerstrconcat(str31,str32);
printf("After concatenate %s\n",str31);
char str41[100];
printf("Enter the str41 val:");
gets(str41);
char ch;
printf("Enter ch:");
scanf("%c",&ch);
frequencyoccurrance(str41,ch);
}
void arraypointer(int *ptr,int n){
    int i;
    for(i=0;i<n;i++){
        printf("Ptr val[%d]=%d\n",i,ptr[i]);

    }
}
int pointerstringlen(char *str){
    int count=0;
    while(*str!='\0'){
        count++;
        str++;
    }
    return count;
}
void pointerstrcopy(char *dest,char *src){
    while(*src!='\0'){
        *dest=*src;
        dest++;
        src++;
    }
    *dest!='\0';


}
void pointerstrconcat(char *str1,char *str2){
    while(*str1){
        str1++;
        }
    while(*str2){
        *str1=*str2;
        str2++;
        str1++;
        }
        *str1='\0';
}
void frequencyoccurrance(char *str1,char ch){
    int count=0;
    while(*str1!='\0'){
        str1++;
        if(ch==*str1){
            count++;
        }
    }
    printf("ch=%c in no of times present %d\n",ch,count);
}
