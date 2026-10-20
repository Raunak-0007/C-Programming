#include<stdio.h>

int main(){
    int n,i,j,sum=0;
    printf("\n\nEnter the no you want to print prime numbers upto:\n");
    scanf("%d",&n);
    printf("Prime numbers are:");
    for(i=2;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                sum=sum+1;
            }
        }
        if(sum==2){
            printf("%d ",i);
        
        
        }
        sum=0;
    }          
    return 0;
}