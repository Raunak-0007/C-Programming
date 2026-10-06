#include<stdio.h>
int main(){
    char n;
    printf("\nEnter an alphabet:");
    scanf("%c",&n);
    if(n=='a'||n=='e'||n=='i'||n=='o'||n=='u'||n=='A'||n=='E'||n=='I'||n=='O'||n=='U')
        printf("Entered albhabet is a vowel");
    else
    printf("Entered albhabet is not a vowel");

    return 0;


}