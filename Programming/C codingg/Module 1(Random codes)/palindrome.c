#include<stdio.h>
int main(){
    
    int n,a,rem=0,r=0,reverse=0;
    printf("\nEnter an Floating number\n");
    scanf("%d",&n);
    a=n;
    while(n>0)
    {
        rem=n%10;
        reverse=reverse*10+rem;
        n=n/10;
    }
printf("\nReverse is %d\n",reverse);
//printf("a:%d",a);

if(reverse==a)
    printf("\nThe entered number is a palindrome\n");
else
    printf("\nThe entered number is not a palindrome\n\n");

return 0;



}