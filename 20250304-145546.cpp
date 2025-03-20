#include <stdio.h>

int main() {
float HST, PH, salario;
printf("Ingresar las horas semanales de trabajo: ");
scanf("%f", &HST);
printf("Ingresar el precio por hora de trabajo: ");
 scanf("%f", &PH);
 if (HST <= 40) {
 salario = HST * PH;
} else {
 salario = (40 * PH) + ((HST - 40) * PH * 1.5);
    }

    
printf("El salario semanal es: %.2f\n", salario);

    return 0;
}