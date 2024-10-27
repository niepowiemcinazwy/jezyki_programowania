#include <stdio.h>

int main() {
    
    float x1, y1, x2, y2;

    printf("Podaj wspolrzedne pierwszego wierzochoka po przecinku (x1, y1): ");
    scanf("%f,%f", &x1, &y1);
    
    printf("Podaj wspolrzedne drugiego wierzochoka po przecinku (x2, y2): ");
    scanf("%f,%f", &x2, &y2);

    float length = (x2 - x1 > 0 ? x2 - x1 : x1 - x2);
    float width = (y2 - y1 > 0 ? y2 - y1 : y1 - y2);

    float pole = length * width;
    float obwod = 2 * (length + width);

    printf("Pole: %.2f\n", pole);
    printf("Obwód: %.2f\n", obwod);

    return 0;
}
