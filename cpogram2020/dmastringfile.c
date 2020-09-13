#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int *ptr,i;
    char name[20];
    char address[100];
    FILE *fpw,*fpr;
    ptr=(char *)malloc(10*sizeof(char));
    if(ptr==NULL){
        printf("Memory is not allocated");
    }
    else{
        fpw=fopen("filedmawrite.txt","w");
        if(fpw==NULL){
            printf("File doesn't open1");
        }
        else{
            printf("Enter the name:");
            gets(name);
            fputs(name,fpw);
            printf("Enter the address:");
            gets(address);
            fputs(address,fpw);
        }
        fclose(fpw);
        fpr=fopen("filedmawrite.txt","r");
        if(fpr==NULL){
            printf("File doesn't open2");
        }
        else{
            char ch;
            fseek(fpr,5,SEEK_SET);
            int pos=ftell(fpr);
            printf("cursor position=%d\n",pos);
            fgets(ch,5,fpr);
            while((ch=fgetc(fpr))!=EOF){
                    printf("%c",ch);
            }
        }
        fclose(fpr);
    }
    printf("\n");
    printf("Before freeze sizeof ptr=%d\n",sizeof(*ptr));
    free(ptr);
    printf("After freeze sizeof ptr=%d\n",sizeof(*ptr));

}
