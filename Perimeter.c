#include<stdio.h>
int main() {
    //Taking two variables
    int a,b;
    printf("Length of rectangle: ");
    //Taking input for variable a
    scanf("%d",&a);
    printf("breadth of rectangle: ");
    //Taking input for variable b
    scanf("%d",&b);
    //Perimeter of rectangle
    printf("perimeter of rectangle: %d",(a+b)*2);
    return 0;
}