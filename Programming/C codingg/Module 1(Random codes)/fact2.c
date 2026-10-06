#include<stdio.h>
int fact(int a)
{
    if(a==1||a==0||a<0)
    {
        return 1;
    }

    return fact(a-1)*a;
}
int main(){
    int b,n;
    printf("\nEnter a number you want the factorial of:\n");
    scanf("%d",&n);
    b=fact(n);
    printf("Factorial of%d is:%d",n,b);




}