#include <stdio.h>

int main() {
    
    int a, b;

    printf("Podaj pierwsza liczbe: ");
    scanf("%d", &a);
    printf("Podaj druga liczbe: ");
    scanf("%d", &b);

    if (a > b) {
        printf("Wieksza liczba to: %d\n", a);
    } else if (b > a) {
        printf("Wieksza liczba to: %d\n", b);
    } else {
        printf("Obie liczby sa rowne: %d\n", a);
    }

    return 0;
}
