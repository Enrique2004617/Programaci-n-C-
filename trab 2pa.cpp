#include <stdio.h>
#include <string.h>




int main() {
char primera[300];
char segunda[50];
char resultado[50] = ""; 
printf("Escribe una palabra: ");
scanf("%s", primera);




printf("escribe otra palabra: ");
scanf("%s", segunda);
int len = strlen(primera);


    
for(int i = 0; i < len; i++) {
strcat(resultado, segunda);  }
strcat(primera, resultado);



printf("Resultado: %s\n", primera);
return 0;
}