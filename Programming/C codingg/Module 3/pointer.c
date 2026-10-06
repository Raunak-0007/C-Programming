#include<stdio.h>
int main(){
    int a=10;
    int* b=&a; 
    int*c;
    c=&a;
    printf("The address of c is %p\n",c);
    printf("The address of a is %p\n",&a);
    printf("The address of b is %p\n",&b);
    printf("stored address in b %p\n",b);
    printf("value stored at adress b %d\n",*b);
}