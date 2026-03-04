#include<stdio.h>
int main() {
    int n,a;
    do {
        printf("Enter a number: ");
        scanf("%d",&n);
        if (n%7==0) {
            break;
        }
    }
    while(1);
    printf("%d is the Multiple of 7",n);
}