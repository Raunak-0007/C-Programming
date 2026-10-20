#include<stdio.h>

int main(){
    int n,i,j,sum=0;
    printf("\n\nEnter the Number to check for the Perfect no:\n");
    scanf("%d",&n);
    for(i=1;i<n;i++){
        if(n%i==0){
            sum=sum+i;
        }
    }
    if(sum==n){
        printf("\nYes it is a perfect number\n");
    }
    else
        printf("\nNot a perfect number\n");
    return 0;
}