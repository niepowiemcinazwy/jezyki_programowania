#include <stdio.h>

int main() {
    
    int number = 3;
    int odp;
    int proby = 3;

    printf("Odgadnij liczbe z zakresu 1-5. Masz 3 szanse.\n");

    for (int i = 0; i < proby; i++) {
        printf("Podaj swoja probe (%d pozostalych szans): ", proby - i);
        scanf("%d", &odp);

        if (odp < 1 || odp > 5) {
            printf("Nie trafiles! Straciłeś szansę.\n");
            continue;
        }

        if (odp == number) {
            printf("Odgadles liczbe! Liczba bylo: %d!\n", number);
            return 0;
        } else {
            printf("Niepoprawna liczba. Sprobuj jeszcze raz.\n");
        }
    }

    printf("Nie trafiles ani razu poprawnej liczby. Poprawna liczba to %d.\n", number);

    return 0;
}
