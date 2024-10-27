#include <stdio.h>

int main() {
    char character;
    int ascii_code;

    printf("Podaj wartosc (liczba lub litera): ");
    scanf("%c", &character);

    if ((character >= 'A' && character <= 'Z') || (character >= 'a' && character <= 'z')) {
        printf("Wartosc '%c' jest litera alfabetu.\n", character);
    } else {
        printf("Wartosc '%c' nie jest litera alfabetu.\n", character);
    }

    return 0;
}
