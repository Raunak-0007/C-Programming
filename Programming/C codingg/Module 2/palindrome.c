#include<stdio.h>
int main(){
    int a,r,c,rev=0;
    printf("\nEnter a number to check if it is a palindrome or not:");
    scanf("%d",&a);
    c=a;
    while(a>0)
    {
        r=a%10;
        a=a/10;
        rev=rev*10+r;
    }
    if(rev==c)
        printf("\n%d is a Palindrome\n",c);
    else
        printf("\n%d is not a Palindrome\n",c);


    return 0;
}