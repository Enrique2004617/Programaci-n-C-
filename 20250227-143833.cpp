#include <stdio.h>
int main(){
int salario;
    int tiempo;

    printf("¿Cuántos años has trabajando? ");
    scanf("%d", &tiempo);

    if (tiempo >= 5) {
        printf("¿Cuál es tu salario? ");
        scanf("%d", &salario);
        int x = salario*0.1; 
        if (x >= 1000) {
            printf("¡Felicidades, puedes acceder al crédito hipotecario!\n");
        } else{
            printf("Lo sentimos, no pudo acceder al crédito hipotecario\n");
        }
    } else {
        printf("Lo sentimos, no pudo ser beneficiario del crédito hipotecario\n");
    }
    }