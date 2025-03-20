

#include <stdio.h>

int main() {
    int i = 1;

    
    printf("Numeros divisibles entre 3 (0 < n < 1000):\n");
    i = 1;
    while (i < 1000) {
        if (i % 3 == 0) {
            printf("%d ", i);
        }
        i++;
    }

    printf("\n\nNumeros divisibles entre 2 y 7 (0 < n < 1000):\n");
    i = 1;
    while (i < 1000) {
        if (i % 2 == 0 && i % 7 == 0) {
            printf("%d .", i);
        }
        i++;
    }

    printf("\n\nNumeros positivos menores que 1000 omitiendo los divisibles por 7:\n");
    i = 1;
    while (i < 1000) {
        if (i % 7 != 0) {
            printf("%d ", i);
        }
        i++;
    }

    printf("\n");
    return 0;
}


