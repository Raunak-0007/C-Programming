#include<stdio.h>
int fab(int n){
    int a=0,c,b=1;
    for(int i=1;i<=n;i=i+1)
    {  
        printf("%d\n",a);
        c=a+b;
        a=b;
        b=c;
        
        //printf("%d\n",c);
        

    }
}
int main(){
    int d;
    printf("\nEnter how many fabonacci terms you want to display:\n");
    scanf("%d",&d);
    //printf("1\n");
    fab(d);



}