#include<stdio.h>
#include<unistd.h>


int main(){
    int a,b,c;
    printf("\n\n\nWhose area you want to calculate:\n\n(1)Square or Rectangel:\n(2)Triangle:\n(3)Circle:\n(4)parellelogram:\n");
    scanf("%d",&a);
    if(a==1){
        printf("Enter Length:\n");
        scanf("%d",&b);
        printf("Enter Breadth:\n");
        scanf("%d",&c);
        
        printf("Area of Square or rectangle is:%d",(c*b));
    }
    else if(a==2){
        printf("Enter Base length:\n");
        scanf("%d",&b);
        printf("Enter height:\n");
        scanf("%d",&c);
        
        printf("Area of Triangle is:%d",((c*b)/2));
    }
    else if(a==3){
        printf("Enter Radius:\n");
        scanf("%d",&b);
        float d =((3.14159)*(b*b));
        
        printf("Area of Circle is:%f",d);
    }
    else if(a==4){
         
        printf("Enter Base length:\n");
        scanf("%d",&b);
        printf("Enter Height:\n");
        scanf("%d",&c);
        
        
        printf("Area of Parallelogram is:%d",(c*b));
    }
    else
        for(int i=1;i<10;i++)
        {
        printf("More Shapes coming soon. !!!!!!!!!!!!!!!!!\n\n");
        sleep(1);
        }
    return 0;
}