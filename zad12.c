#include <stdio.h>

int main() {
    
    int number;

    printf("Podaj liczbe: ");
    scanf("%d", &number);

    for (int i = 2; i <= 6; i++) {
        if (number % i == 0) {
            printf("Liczba %d jest podzielna przez %d.\n", number, i);
            return 0;
        }
    }
    printf("Liczba %d nie jest podzielna przez zadna z liczb od 2 do 6.\n", number);

    return 0;
}
