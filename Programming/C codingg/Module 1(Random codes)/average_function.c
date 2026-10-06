#include<stdio.h>
float average(int a,int b,int c){
    return(a+b+c)/3;
}
int main (){
    int a,b,c;
    printf("\nEnter three integers\n");
    scanf("%d %d %d",&a,&b,&c);
    printf("Average is:%f",average(a,b,c));
    return 0;
}
