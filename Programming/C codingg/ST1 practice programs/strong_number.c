#include<stdio.h>

int fact(int a){
    if(a==0 || a==1)
        return 1;
    return fact(a-1)*a;
}

int main(){
    int n,n1,n2,strong=0,rem;
    printf("\n\nEnter a number to check for Strong number:\n");
    scanf("%d",&n);
    n1=n;
    while(n>0){
        rem=n%10;
        n=n/10;
        strong=(strong+fact(rem));
    }
    if(strong==n1){
        printf("Yes this is a strong number\n\n");
    }
    else
        printf("Not a strong number\n\n");
    return 0;
}