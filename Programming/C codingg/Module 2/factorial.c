#include<stdio.h>

int fact(int a){
    if(a==0||a==1||a<0)
        return 1;
    return fact(a-1)*a;

}



int main(){
    int n;
    printf("\nEnter the number you want the factorial of:");
    scanf("%d",&n);
    printf("Factorial of %d is :%d",n,fact(n));





return 0;
}