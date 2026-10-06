#include<stdio.h>
int main(){
    int a,b,c,rev=0;
    printf("\n\nEnter the number you want to reverse:");
    scanf("%d",&a);
    c=a;
    while(a>0)
    {
        b=a%10;
        a=a/10;
        rev=rev*10+b;
    }
printf("\n\nReverse of %d is:%d\n\n",c,rev);




return 0;
}