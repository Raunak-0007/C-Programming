#include<stdio.h>
int main(){
    int i,n,a=1,c;
    printf("\nEnter n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(c=1;c<=((n)-i);c++){
            printf(" ");
        }
        while(a<=i)
        {
            printf("*");
            a=a+1;
        }
        printf("\n");
        a=1;
        c=1;
        //printf("\n");
    }

}