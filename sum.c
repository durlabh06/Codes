#include<stdio.h>
int main() {
    int n,sum,i,j=1;
    while(j<=5) {
    printf("Enter Your Number: ");
    scanf("%d",&n);
    sum=0;
    i=1;
    while(i<=n) {
    sum=sum+i;
    i++;
    }
    printf("%d \n",sum);
    }
    return 0;
}