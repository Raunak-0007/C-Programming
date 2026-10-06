#include<stdio.h>
int main(){
    int a = 5;
    int*b=&a;
    int**c=&b;
    printf("Value of ais:%d\n",a);
    printf("Value of ais:%d\n",*b);
    printf("Value of ais:%d\n",**c);
    printf("Value of ais:%p\n",&a);
}