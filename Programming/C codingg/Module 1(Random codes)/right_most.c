#include<stdio.h>
int main(){
    float n;
    int a,rem,r;
    printf("Enter an Floating number");
    scanf("%f",&n);
    a=(int)n;
    r=a%10;
    while(a>0)
    {
        rem=a%10;
        a=a/10;
    }
printf("\n Leftmost digit is %d",rem);
printf("\n Rightmost digit is %d",r);
return 0;



}