#include <stdio.h>
#include <ctype.h> 
 
int n = 0;
int tablica[20];
 
void wypisz_tablice() {
    if (n == 0) {
        printf("\nTablica jest pusta.\n");
        return;
    }
    printf("\nElementy tablicy: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", tablica[i]);
    }
    printf("\n");
}
 

void dodaj_element(char input) {
    if (n >= 20) {
        printf("\nTablica jest pelna.\n");
        return;
    }
 
    if (isdigit(input)) {
        tablica[n++] = input - '0';
    } else {
        printf("\nNiepoprawny znak, chcesz dodać kod ASCII? (t/n): ");
        char odp;
        scanf(" %c", &odp);
        if (odp == 't' || odp == 'T') {
            tablica[n++] = input;
        }
    }
}

void usun_element(int indeks) {
    if (indeks < 0 || indeks >= n) {
        printf("\nNiepoprawny indeks.\n");
        return;
    }
    for (int i = indeks; i < n - 1; i++) {
        tablica[i] = tablica[i + 1];
    }
    n--;
}

void wypisz_w_kolumnach(int kolumny) {
    if (n == 0) {
        printf("\nTablica jest pusta.\n");
        return;
    }
    int licznik = 0;
    for (int i = 0; i < n; i++) {
        printf("%d ", tablica[i]);
        licznik++;
        if (licznik == kolumny) {
            printf("\n");
            licznik = 0;
        }
    }
    printf("\n");
}
 
int suma_kwadratow() {
    if (n == 0) {
        printf("\nSuma = 0 (brak elementów w tablicy).\n");
        return 0;
    }
    int suma = 0;
    for (int i = 0; i < n; i++) {
        suma += tablica[i] * tablica[i];
    }
    return suma;
}

int main() {
    char wybor;
    do {
        printf("\nWybierz opcje:\n");
        printf("w -> wypisanie elementow z tablicy\n");
        printf("e -> wyjscie\n");
        printf("d -> dodawanie elementu\n");
        printf("u -> usuwanie elementu\n");
        printf("s -> suma kwadratow\n");
        printf("t -> wypisanie z tablicy w kolumnach\n");
         printf("\nTwoja odpowiedz: ");
        scanf(" %c", &wybor);
 
        switch (wybor) {
            case 'w':
                wypisz_tablice();
            break;
            
            case 'e':
                printf("\nZakonczono dzialanie programu.\n");
            break;
            
            case 'd': {
                char znak;
                printf("\nPodaj wartosc do dodania (znak/cyfra): ");
                scanf(" %c", &znak);
                dodaj_element(znak);
            break;
            
            }
            case 'u': {
                int indeks;
                printf("\nPodaj indeks elementu do usuniecia: ");
                scanf("%d", &indeks);
                usun_element(indeks);
            break;
            }
            case 's': {
                int suma = suma_kwadratow();
                printf("\nSuma kwadratow elementow: %d\n", suma);
            break;
            }
            
            case 't': {
                int kolumny;
                printf("\nPodaj liczbe kolumn: ");
                scanf("%d", &kolumny);
                wypisz_w_kolumnach(kolumny);
            break;
            }
            default:
                printf("\n\nNiepoprawna opcja.\n\n");
            break;
        }
    } while (wybor != 'e');
 
    return 0;
}
