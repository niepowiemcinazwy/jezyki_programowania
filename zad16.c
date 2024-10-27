#include <stdio.h>

int main() {
    
    int odp;
    int proby = 4;
    int number = 3;

    printf("Odgadnij liczbe z zakresu 1-5. Masz 4 szanse.\n");

    for (int i = 0; i < proby; i++) {
        printf("Podaj swoja probe (%d pozostalych szans szans): ", proby - i);
        scanf("%d", &odp);
        printf("Nie trafiles liczby.\n");
    }
    printf("Nie trafiles liczby.\n");

    return 0;
}
