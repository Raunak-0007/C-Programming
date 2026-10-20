#include<stdio.h>

int main(){
    int a,b,i,n=1;
    printf("\n\nEnter the number and the power:\n");
    scanf("%d%d",&a,&b);
    for(i=1;i<=b;i++){
        n=n*a;
    }
    printf("%d to the power %d is:%d \n",a,b,n);
    
    return 0;
}