#include<stdio.h>
int main() {
    int n, b;
    do {
        printf("Enter a number: ");
        scanf("%d", &n);
        b = 1; // Initialize b to 1 for factorial
        for (int i = 1; i <= n; i++) {
            b = b * i;
        }
        printf("Factorial of %d is %d\n", n, b);
    } while (1);
    return 0;
}    