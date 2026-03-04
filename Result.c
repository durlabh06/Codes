#include<stdio.h>
int main() {
    int marks;
    printf("Enter your marks:");
    scanf("%d",&marks);
    if(marks>=0 && marks<=30) {
        printf("You are Fail");
    }
    else if(marks>=30 && marks<=100) {
        printf("You are Passed");
    }
    else {
        printf("Wrong input");
    }
    return 0;
}