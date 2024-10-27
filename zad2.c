#include <stdio.h>

int main() {

  char fun;
  printf("Podaj funkcje [ +,-,*,/ ]: ");
  scanf("%c", &fun);
  double a, b;
  printf("Podaj dwie liczby A i B po przecinku: ");
  scanf("%lf,%lf", &a, &b);

  switch (fun) {
      
    case '+':
      printf("%.1lf dodac %.1lf jest rowne %.1lf", a, b, a + b);
      break;
      
    case '-':
    
      printf("%.1lf odjac %.1lf jest rowne %.1lf", a, b, a - b);
      break;
      
    case '*':
    
      printf("%.1lf pomnozone przez %.1lf jest rowne %.1lf", a, b, a * b);
      break;
      
    case '/':
    
      printf("%.1lf podzielone przez %.1lf jest rowne %.1lf", a, b, a / b);
      break;
      
    default:
      printf("Funkcja nie jest poprawna. Poprawne wartosci: [ +,-,*,/ ]");
  }
}
