#include<stdio.h>
int main() {
        int marks;
        printf("Enter your marks: \n");
        scanf("%d",&marks);
        if (marks>0 && marks>=30) {
        printf("C Grade");
        if (marks=0)
        printf("Fail");
        if (marks<30 && marks>70)
        printf("B Grade");
        if (marks<70 && marks>80)
        printf("A Grade");
        if (marks<=90 && marks>=100)
        printf("A+ Grade");
    }
    return 0;
}