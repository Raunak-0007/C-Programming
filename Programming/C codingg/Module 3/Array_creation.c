#include<stdio.h>
int main(){
    int n,a[100];
    printf("\nHow many records you want to enter:");
    scanf("%d",&n);
    printf("Enter array elements(Marks):\n");
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
        printf("Marks of student %d are %d\n",(i+1),a[i]);


    for(int i=0;i<n;i++)
        if(a[i]<33)
            printf("Student %d is Fail\n",i+1);
        else if(a[i]>33)
            printf("Student %d is Pass\n",i+1);
        
    return 0;
        
}