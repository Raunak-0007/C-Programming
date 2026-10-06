#include<stdio.h>
int main(){
    printf("\nenter the number you want to check for a Perfect number:");
    int n,sum=0;
    scanf("%d",&n);
    for(int i=1;i<n;i++)
        if(n%i==0)
            sum=sum+i;
    if(sum==n)
        printf("%d is a perfect number\n\n",n);
    else
        printf("%d is not a perfect number\n\n",n);








return 0;  
}