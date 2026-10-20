#include<stdio.h>

int main(){
    int list[50],find,i,n,l,srch,count=0;
    printf("\n\nEnter the list length:");
    scanf("%d",&l);
    printf("\n\nEnter the list elements :");
    for(i=0;i<l;i++){
        scanf("%d",&n);
        list[i]=n;
    }
    
    printf("\n\nList:");
    for(i=0;i<l;i++){
        printf("%d ",list[i]);
    }
    printf("\n\nEnter the value you want to search:");
    scanf("%d",&srch);
    
    for(i=0;i<l;i++){
        if(srch==list[i]){
            printf("\n\nValue found at index: %d\n\n",i);
        }
        else if(srch!=list[i]){
            count=count+1;
            if(count==(l))
                printf("\n\nValue not found.......\n\n");
        }
        
    }
    return 0;
}