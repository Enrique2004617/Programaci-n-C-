#include <stdio.h>

int main() {
    int N;
    
    printf("pon un numero aqui:");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\t");
        
        for (int j = 0; j < (N - i + 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}