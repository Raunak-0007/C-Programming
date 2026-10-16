#include<stdio.h>

int main(){
    int count,n,n1,rem=0,c0=0,c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,c7=0,c8=0,c9=0;
    printf("Enter the number:\n");
    scanf("%d",&n);
    n1=n;
    while(n1>0){
        rem=n1%10;
        n1=n1/10;
        if(rem==0)
            c0=c0+1;
        else if(rem==1)
            c1=c1+1;
        else if(rem==2)
            c2=c2+1;
        else if(rem==3)
            c3=c3+1;
        else if(rem==4)
            c4=c4+1;
        else if(rem==5)
            c5=c5+1;
        else if(rem==6)
            c6=c6+1;
        else if(rem==7)
            c7=c7+1;
        else if(rem==8)
            c8=c8+1;
        else if(rem==9)
            c9=c9+1;
    
            
    }
    printf("No of 0=%d \n No of 1=%d \n No of 2=%d \n No of 3=%d \n No of 4=%d \n No of 5=%d \n No of 6=%d \n No of 7=%d \n No of 8=%d \n No of 9=%d \n",c0,c1,c2,c3,c4,c5,c6,c7,c8,c9);
    
    
    return 0;
}