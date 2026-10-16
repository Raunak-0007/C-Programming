#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter three numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    if((a*a==(b*b+c*c))||(b*b==(c*c+a*a))||(c*c==(a*a+b*b)))
        printf("Yes these are Pythagorean Tripplet \n");
    else
        printf("Yes these are not Pythagorean Tripplet \n");
    return 0;
}