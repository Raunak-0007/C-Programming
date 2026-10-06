#include<stdio.h>
int main(){
    printf("\nEnter the number you want to check for a Prime number:");
    int n,sum=0;
    scanf("%d",&n);
    for(int i=1;i<n;i++)
        if(n%i==0)
            sum=sum+i;
    if(sum==1)
        printf("%d is a Prime number\n\n",n);
    else
        printf("%d is not a Prime number\n\n",n);








return 0;  
}