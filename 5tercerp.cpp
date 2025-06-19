#include <stdio.h>

int main() {
    int opcion;
    float num1, num2, resultado;

    do {
        
        printf("\nCALCULADORA\n");
        printf("1. Suma\n");
        printf("2. Resta\n");
        printf("3. Multiplicación\n");
        printf("4. División\n");
        printf("5. Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);

        if (opcion == 5) {
            printf("Saliendo del programa...\n");
            break;
        }

        printf("Ingrese el primer número: ");
        scanf("%f", &num1);
        printf("Ingrese el segundo número: ");
        scanf("%f", &num2);

        switch (opcion) {
            case 1:
                resultado = num1 + num2;
                printf("Resultado de la suma: %.2f\n", resultado);
                break;
            case 2:
                resultado = num1 - num2;
                printf("Resultado de la resta: %.2f\n", resultado);
                break;
            case 3:
                resultado = num1 * num2;
                printf("Resultado de la multiplicación: %.2f\n", resultado);
                break;
            case 4:
                if (num2 != 0) {
                    resultado = num1 / num2;
                    printf("Resultado de la división: %.2f\n", resultado);
                } else {
                    printf("Error: División entre cero no permitida.\n");
                }
                break;
            default:
                printf("Opción inválida. Intente nuevamente.\n");
        }

        printf("\nPresione Enter para continuar...\n");
        getchar(); 
        getchar(); 

    } while (1); 

    return 0;
}
  