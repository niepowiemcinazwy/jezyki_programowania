#include <stdio.h>

int main() {
    
    int a, b, c;

    printf("Podaj pierwsza liczbe: ");
    scanf("%d", &a);
    printf("Podaj druga liczbe: ");
    scanf("%d", &b);
    printf("Podaj trzecia liczbe: ");
    scanf("%d", &c);

    int max = a;

    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }

    printf("Najwieksza liczba to: %d\n", max);

    return 0;
}
