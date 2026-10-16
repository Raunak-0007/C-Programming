#include<stdio.h>

int main(){
    int n,b=1;
    printf("Enter How many terms you want\n");
    scanf("%d",&n);
        for(int i=1;i<=n;i++){
            int a=i;
            while(b<=i){
                printf("%d",b);
                b=b+1;
            }
            b=1;
            printf("\n");

        }
    return 0;
}