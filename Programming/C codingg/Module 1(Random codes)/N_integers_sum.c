#include<stdio.h>
int sum(int a)
{
    if(a==1||a==0||a<0)
    {
        return 1;
    }

    return sum(a-1)+a;
}
int main(){
    int b,n;
    printf("\nEnter a number :");
    scanf("%d",&n);
    b=sum(n);
    printf("\nSum upto %d is:%d\n\n",n,b);




}