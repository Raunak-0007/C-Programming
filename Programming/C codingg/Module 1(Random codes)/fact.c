#include<stdio.h>
int main(){
    int n,a,b=1,fact;
    printf("\nEnter the number you want the factorial of\n");
    scanf("%d",&n);
    for(a=1;a<=n;a=a+1)
        b=b*a;
    printf("\nFactorial is %d\n",b);
    return 0;

}