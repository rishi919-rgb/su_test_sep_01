#include <stdio.h>
int main () {
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    if ((n & (n-1))==0)
    {
        printf("Power of 2");
    } else printf("Not a power of 2");
    
}