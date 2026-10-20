#include<stdio.h>

int main(){
    int a[100], n, pos, val, i;
    printf("Enter size: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for (i = 0; i < n; i++) 
        scanf("%d", &a[i]);
    printf("Enter position (1 to %d): ", n);
    scanf("%d", &pos);
    printf("Enter element to insert: ");
    scanf("%d", &val);
    
    a[pos-1]=val;
    printf("Array after insertion: ");
    for (i = 0; i < n; i++) 
        printf("%d ", a[i]);
    return 0;
    
}
