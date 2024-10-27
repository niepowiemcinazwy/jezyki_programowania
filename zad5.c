#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main() {
    
    char input[10];
    printf("Wprowadź znak ASCII lub kod ASCII: ");
    scanf("%s", input);

    int ascii_code = atoi(input);
    
    if (ascii_code > 0 && ascii_code < 128) {
        char character = (char)ascii_code;
        
        printf("Wprowadzony kod ASCII: %d odpowiada znakowi: '%c'\n", ascii_code, character);
        
        if (isalpha(character)) {
            printf("Znak '%c' jest literą alfabetu.\n", character);
        } else {
            printf("Znak '%c' nie jest literą alfabetu.\n", character);
        }
    } else if (input[1] == '\0') {

        char character = input[0];
        
        if (isalpha(character)) {
            
            printf("Znak '%c' jest literą alfabetu.\n", character);
            
        } else {
            
            printf("Znak '%c' nie jest literą alfabetu.\n", character);
            
        }
    } else {
        printf("Blad! Prosze wprowadzic pojedynczy znak lub kod ASCII.\n");
    }

    return 0;
}
