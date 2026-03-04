#include<stdio.h>
int main() {
    int num,a,prime=1;
    printf("Enter your number: ");
    scanf("%d",&num);
    if(num<=1) {
        prime=0;
    }
    else {
        for(int i=2; i*i<=num; i++) {
            if(num%i==0) {
            prime=0;
            break;
            }
        }
    }
    if(prime) {
        printf("%d is a prime no. ",num);
    }
    else {
        printf("%d is not a prime no. ",num);
    }   
    return 0;
}