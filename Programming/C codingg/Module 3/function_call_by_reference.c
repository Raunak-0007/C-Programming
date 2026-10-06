#include<stdio.h>
int mult(int*a,int*b){
    *a=20;
    return(*a * *b);
}
int main(){
    int a=10,b=5;
    printf("multiply is:%d\n",mult(&a,&b));
    printf("value of a is:%d\n and b is:%d",a,b);
}