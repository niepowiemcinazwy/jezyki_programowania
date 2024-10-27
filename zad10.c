#include <stdio.h>

int main() {
    
    float a, b, c;

    printf("Podaj długosc pierwszego odcinka: ");
    scanf("%f", &a);
    printf("Podaj długosc drugiego odcinka: ");
    scanf("%f", &b);
    printf("Podaj długosc trzeciego odcinka: ");
    scanf("%f", &c);

    if (a + b > c && a + c > b && b + c > a) {
        printf("Z tych odcinkow mozna utworzyc trojkat.\n");
    } else {
        printf("Z tych odcinkow nie mozna utworzyc trojkata.\n");
    }

    return 0;
}
