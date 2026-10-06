#include<stdio.h>
int main(){
    int a,b,c,sum=0;
    printf("\n\nEnter the number:");
    scanf("%d",&a);
    c=a;
    while(a>0)
    {
        b=a%10;
        a=a/10;
        sum=sum+b;
    }
printf("\n\nsum of all the digits of %d is:%d\n\n",c,sum);


return 0;  
}