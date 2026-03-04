#include<stdio.h>
int main() {
    char a;
    printf("Enter a character: ");
    scanf(" %c",&a);
    if(a>='0' && a<='9') {
        printf("Char is a digit: %c",a);
    }
    else {
        printf("This is char isn't a digit: %c",a);
    }
    return 0;
}