#include<stdio.h>
int main() {
    int n, b,i;
    do {
        printf("Enter a value: ");
        scanf("%d", &n);
        printf("Enter a Stop Value: ");
        scanf("%d",&i);
        b=0;
        for( n; n<=i; n++) {
            b+=n;
        }
        printf("Sum of numbers: %d\n",b);
    } while (1);
    return 0;
}    