#include<stdio.h>

int main(){
    int a=4,x=50,y=45;
    x=y++ + x++ + ++y - y++;
    y=x++ + ++y + y++ - --y;
    printf("x=%d,y=%d\n",y,x);
    printf("a=%d\n",a++);
    printf("a=%d\n",++a);
    printf("a=%d\n",a);
    return 0;
}





