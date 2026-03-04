#include<stdio.h>
int main() {
    int n,table,j=1;
    while(j<=5) {
    printf("Multiplication Table of : ");
    scanf("%d",&n);
    for(int i=1; i<=10; i++) {
        table=n * i;
        printf("%d \n",table);
    }
}
    return 0;
}