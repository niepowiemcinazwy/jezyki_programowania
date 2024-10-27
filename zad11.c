#include <stdio.h>

int main() {
    
    float a, b, c;

    printf("Podaj dlugosc pierwszego odcinka: ");
    scanf("%f", &a);
    
    printf("Podaj dlugosc pierwszego odcinka: ");
    scanf("%f", &b);
    
    printf("Podaj dlugosc pierwszego odcinka: ");
    scanf("%f", &c);

    float max, side1, side2;

    if (a >= b && a >= c) {
        max = a;
        side1 = b;
        side2 = c;
    } else if (b >= a && b >= c) {
        max = b;
        side1 = a;
        side2 = c;
    } else {
        max = c;
        side1 = a;
        side2 = b;
    }

    if (max * max == side1 * side1 + side2 * side2) {
        printf("Z tych odcinkow jestesmy w stanie utworzyc trojkat prostokatny.\n");
    } else {
        printf("Z tych odcinków nie utworzymy trojkata prostokatnego.\n");
    }

    return 0;
}
