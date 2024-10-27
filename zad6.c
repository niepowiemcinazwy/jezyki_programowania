#include <stdio.h>

int main() {
    
    int year;

    printf("Podaj rok: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("Rok %d JEST rokiem przestępnym.\n", year);
    } else {
        printf("Rok %d NIE JEST rokiem przestępnym.\n", year);
    }

    return 0;
}
