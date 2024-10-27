#include <stdio.h>

int main() {
    
    float x1, y1, x2, y2;

    printf("Podaj współrzędne pierwszego wierzchołka po przecinku (x1, y1): ");
    scanf("%f,%f", &x1, &y1);
    
    printf("Podaj współrzędne drugiego wierzchołka po przecinku (x2, y2): ");
    scanf("%f,%f", &x2, &y2);

    float length = (x2 - x1 > 0 ? x2 - x1 : x1 - x2);
    float width = (y2 - y1 > 0 ? y2 - y1 : y1 - y2);

    float pole = length * width;
    float obwod = 2 * (length + width);

    printf("Pole prostokąta: %.2f\n", pole);
    printf("Obwód prostokąta: %.2f\n", obwod);

    return 0;
}
