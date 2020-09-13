#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void dmamallocsumpgm(int);
int main(){
    //malloc
    char name[20],name2[20];
    char address[30];
    char *address2;
    printf("Enter the name:");
    gets(name);
    printf("Enter the address:");
    gets(address);
    strcpy(name2,name);
    address2=(char *)malloc(50*sizeof(char));
    if(address2==NULL){
        printf("Memory is not allocatted\n");
    }
    else{
        strcpy(address2,address);
        printf("name=%s\n",name2);
        printf("Address=%s\n",address2);
        printf("Malloc=Sizeof(Address2)=%d\n",sizeof(address2));
    }
    free(address2);
    //calloc
    char namecalloc[20],namecalloc2[20];
    char addresscalloc[30];
    char *addresscalloc2;
    printf("Enter the name:");
    gets(namecalloc);
    printf("Enter the address:");
    gets(addresscalloc);
    addresscalloc2=(char*)calloc(50,sizeof(char));
    if(addresscalloc2==NULL){
        printf("Memory is not allocated!!!");
    }
    else{
        strcpy(namecalloc2,namecalloc);
        strcpy(addresscalloc2,addresscalloc);
        printf("Name=%s\n",namecalloc2);
        printf("Address=%s\n",addresscalloc2);
        printf("Calloc=Sizeof(Address2)=%d\n",sizeof(addresscalloc2));
    }
    //malloc
    int n,i,*ptr;
    printf("Enter the size of val:");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    if(ptr==NULL){
        printf("Memory is not allocated!!!");
    }
    else{
        printf("Enter the 5 val:");
        for(i=0;i<n;i++){
            scanf("%d",&*(ptr+i));
        }
        for(i=0;i<n;i++){
            printf("val[%d]=%d\n",i,*(ptr+i));
        }
    }
     //realloc
     int n2,i2;
     double *ptr2;
     printf("Enter the size of n2 val:");
    scanf("%d",&n2);
    ptr2=(double*)malloc(6*sizeof(double));
    printf("Size of ptr=%d\n",sizeof(ptr));
    if(ptr2==NULL){
        printf("Memory is not allocated!!!");
    }
    else{
        printf("Enter the 5 val:");
        for(i2=0;i2<n2;i2++){
            scanf("%d",&*(ptr2+i2));
        }
        for(i2=0;i2<n2;i2++){
            printf("address=%u [%d]=%ld\n",(ptr2+i2),i2,*(ptr2+i2));
        }
        printf("\n");
        ptr2=(int*)realloc(ptr2,(sizeof(int)*10));
        for(i2=0;i2<n2;i2++){
            printf("address=%u [%d]=%ld\n",(ptr2+i2),i2,*(ptr2+i2));
        }
    }

    int size=5;
    dmamallocsumpgm(size);
}
void dmamallocsumpgm(int n){
    int i,sum=0,*ptr;
    ptr=(int*)malloc(n*sizeof(int));
    if(ptr==NULL){
        printf("Memory is not allocated");
    }
    else{
        printf("Enter the 5 array val:");
        for(int i=0;i<n;i++){
            scanf("%d",&*(ptr+i));
        }
        for(i=0;i<n;i++){
            sum+=*ptr+i;
            printf("%d\n",*ptr+i);
        }
        printf("sum val=%d\n",sum);
    }

}
