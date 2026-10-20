#include<stdio.h>

int main(){
    float n;
    int left,right,i,n1,n2;
    printf("\n\nEnter a Floating point number:");
    scanf("%f",&n);
    n1=(int)n;
    right=(n1%10);
    while(n1>0){
        left=n1%10;
        n1=n1/10;
    }
    printf("\n\nLeftmost :%d\n\nRightmost :%d\n\n\n",left,right);
    
    
    return 0;
}