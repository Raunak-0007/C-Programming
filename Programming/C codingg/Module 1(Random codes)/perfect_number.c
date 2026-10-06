#include<stdio.h>
int main(){
    int n,i,sum=0;
    printf("\n Enter a positive integer\n");
    scanf("%d",&n);
    for (i=1;i<n;i++)
    {
        if(n%i==0)
            sum=sum+i;

    }
        
    printf("\n N is:%d\n",n);
    printf("\n sum is:%d\n",sum);
    if(sum==n)
        printf("\n%d is a perfect number\n",n);
    else
        printf("\n %d is not a perfect number",n);
    return 0;


    

    





}