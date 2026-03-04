#include<stdio.h>
int main() {
    int n, b;
    do {
        printf("Enter a number: ");
        scanf("%d", &n);
        for(int i=10; i>=1; i--) {
            printf("%d\n",n*i);
        }
    } while (1);
    return 0;
}    