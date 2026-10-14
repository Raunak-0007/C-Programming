#include<stdio.h>
int main(){
    int a[5]={5,4,3,2,1};
    int *ptr=&a[0];
    for(int i=0;i<5;i++){
        printf("Value at index %d is:%d\n",i,*ptr);
        
        ptr++;
    }
    int *ptr2=&a[0];
    for(int i=0;i<5;i++){
        printf("Adress of index %d is:%u\n",i,ptr2);
        ptr2++;
    }
return 0;
}



