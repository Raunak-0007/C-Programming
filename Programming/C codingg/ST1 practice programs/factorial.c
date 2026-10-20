#include<stdio.h>

int main(){
    int n,i,fact=1;
    printf("\n\nEnter the number you want the factorial of:\n");
    scanf("%d",&n);
    for(i=n;i>0;i--){
        fact=fact*i;
    }
    printf("Factorial of %d is :%d \n",n,fact);

    
    return 0;
}