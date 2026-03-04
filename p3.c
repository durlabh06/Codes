#include<stdio.h>
int main() {
    int n;
    do {
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++) {
        if(i<=6) {
            continue;
        }
        if(i % 2 !=0) {
            printf("%d \n",i);
        }
    }        
} while(1);
    return 0;
}