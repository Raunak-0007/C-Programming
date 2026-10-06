#include<stdio.h>
int main(){
    char b='?';
    for (int i=0;i<=10;i=i+1)
    {
        for(int a=0;a<=i;a=a+1)
        {
            printf("%c",b);
        }
        printf( "\n");
    }
    return 0;

}