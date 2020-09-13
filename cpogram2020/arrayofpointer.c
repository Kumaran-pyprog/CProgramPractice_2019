#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void chararray(char []);
void charpointer(char *);
int main(){
int *arr[3]={10,23,45};
char *ptr[3]={'A','S','M'};
//char name[]="Ashok";
for(int i=0;i<3;i++){
    printf("arr[%d]=%d\n",i,arr[i]);
}
for(int j=0;j<3;j++){
    printf("array char[%d]=%c\n",j,ptr[j]);
}
//chararray(name);
char name[]="Ashok";
int i=0;
while(name[i]!='\0'){
    printf("%c",name[i]);
    i++;
    }
}
/*
void chararray(char n){
    int i=0;
    while(n[i]!='\0'){
        printf("%c\n",n);
        i++;
    }

}
//void charpointer(char *);*/
