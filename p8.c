#include <stdio.h>
void namaste();
void bonjour();
int main() {
    while (1) {
        printf("Enter 'i' for indian & 'f' for french: ");
        char c;
        scanf(" %c", &c); // Note the space before %c to consume any leftover whitespace
        if (c == 'i') {
            namaste();
        }
        else if (c == 'f') {
            bonjour();
        }
        else {
            printf("Invalid input! ");
        }
        printf("\n");
    }
}
void namaste() {
    printf("Namaste");
}
void bonjour() {
    printf("Bonjour");
}