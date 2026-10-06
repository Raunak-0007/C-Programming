#include<stdio.h>
int digits(int d){
    int a =0;
    while(d>0){
        d=d/10;
        a=a+1;
    }
    return a;
}
int poww(int e,int f){
    int g=1;
    while(f>0){
        g=g*e;
        f=f-1;
    }
    return g;
}

int main (){
    int a,r,x,dig,sum=0;
    
    printf("\nEnter the number you want to check for the Armstrong:");
    scanf("%d",&a);
    x=a;
    dig=digits(a);
    printf("poww=%d\n",poww(2,3));
    printf("digits=%d\n",digits(6456));
    printf("dig =%d\n",dig);



    while(a>0)
    {
        r=a%10;
        a=a/10;
        sum=poww(r,dig)+sum;
        printf("r =%d\n",r);
    }

    printf("x =%d\n",x);
    printf("sum =%d\n",sum);
    if(sum==x)
        printf("\n%d is an Armstrong number\n",x);
    else
        printf("\n%d is not an Armstrong number\n",x);





    return 0;  
}