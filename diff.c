#include<stdio.h>
int main() {
    int a,b;
    printf("Enter Your number: ");
    scanf("%d",&a);
    printf("Enter Your number: ");
    scanf("%d",&b);
    printf("Smallest number is: %d",(a>b)? a:b);

    return 0;
}