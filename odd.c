#include<stdio.h>
int main() {
    int n;
    do {
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n%2!=0) {
        break;
    }
    } while(1);
    printf("That's an odd number: ");
}
