#include <stdio.h>
int Multiplication(int a, int b) {
    return a * b;
}
int main() {
    int num1, num2, resultat;
    
  printf("first number:");
  scanf("%d", &num1);
  printf("seconed number:");
  scanf("%d", &num2);
  
  resultat = Multiplication(num1, num2);
  printf("totale de %d et %d: %d\n",num1, num2, resultat); 
    
}