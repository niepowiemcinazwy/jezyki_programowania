#include <stdio.h>

int isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int isValidDate(int day, int month, int year) {
    if (month < 1 || month > 12) {
        return 0;
    }

    int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (month == 2 && isLeapYear(year)) {
        daysInMonth[2] = 29;
    }

    if (day < 1 || day > daysInMonth[month]) {
        return 0;
    }

    return 1;
}

int main() {
    
    int day, month, year;

    printf("Podaj dzien: ");
    scanf("%d", &day);
    printf("Podaj miesiac: ");
    scanf("%d", &month);
    printf("Podaj rok: ");
    scanf("%d", &year);

    if (isValidDate(day, month, year)) {
        printf("Data %02d-%02d-%04d jest poprawna.\n", day, month, year);
    } else {
        printf("Data %02d-%02d-%04d nie jest poprawna.\n", day, month, year);
    }

    return 0;
}
