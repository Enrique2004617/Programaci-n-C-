#include <stdio.h> 
#include <string.h>

#define TAM 10

int main() { 
char palabra1[TAM], palabra2[TAM], cambio[TAM];

printf("Escribe la primera palabra: ");
scanf("%s", palabra1);
printf("Escribe la segunda palabra: ");
scanf("%s", palabra2);


strcpy(cambio, palabra1);
strcpy(palabra1, palabra2);
strcpy(palabra2, cambio);


printf("Primera palabra: %s\n", palabra1);
printf("Segunda palabra: %s\n", palabra2);

return 0;



}