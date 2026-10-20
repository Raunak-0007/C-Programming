#include<stdio.h>

int main(){
    int a[100],min,max,n,i,x;
    printf("\nEnter the array length\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter %d element:\n",i+1);
        scanf("%d",&x);
        a[i]=x;
    }
    for(i=0;i<n;i++){
        printf("Value at Index %d is :%d\n",i,a[i]);
    }
    max=a[1];
    min=a[1];
    for(i=0;i<n;i++){
        max=(max>a[i])?(max):(a[i]);
        min=(min<a[i])?(min):(a[i]);
    }
    printf("Maximum Element in Array is:%d\n",max);
    printf("Minimum Element in Array is:%d\n",min);

    return 0;
}