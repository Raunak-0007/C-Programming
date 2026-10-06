#include<stdio.h>
int main(){
    int n,r;
    printf("Enter an integer");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        n=n/10;
    }
printf("\n Leftmost digit is %d",r);
return 0;



}