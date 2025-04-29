#include <stdio.h>

int maximo(int a, int b) {
  return (a > b) ? a : b;
}

int main() {
int num1, num2;
printf("Introduce dos números: ");
scanf("%d %d", &num1, &num2);
printf("El número mayor es: %d\n", maximo(num1, num2));
return 0;
}