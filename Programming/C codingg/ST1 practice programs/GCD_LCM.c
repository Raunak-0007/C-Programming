#include<stdio.h>

int main(){
    int a,b,gcd,lcm,n,i;
    printf("\n\nEnter two numbers you want HCF and LCM:\n");
    scanf("%d%d",&a,&b);
    n=((a>b)?(b):(a));
    for(i=1;i<=n;i++){
        if(a%i==0 && b%i==0){
            gcd=i;
        }
    }
    printf("%d  %d  %d \n",a,b,gcd);
    
    lcm=((a*b)/gcd);
    printf("HCF is:%d\nLCM ic:%d\n",gcd,lcm);

    return 0;
}