#include<stdio.h>
int main()
{
    int choice;
    float a,b;
    printf("1. Add\n,2. Subtract\n,3. Multiplication\n, 4. Division\n,Choose your operation:");
    scanf("%d",&choice);
    printf("Enter First number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    switch(choice)
    {
        case 1:
        printf("Result: %d",a+b);
        break;
        case 2:
        printf("Result: %d",a-b);
        break;
        case 3:
        printf("Result: %d",a*b);
        break;
        case 4:
        printf("Result: %d",a/b);
        break;
        deafult("invalid value");
    }
    return 0;
}