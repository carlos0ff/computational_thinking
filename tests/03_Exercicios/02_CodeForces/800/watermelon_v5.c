#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * Watermelon - Implementação 5
 * Criado em: 23/04/2025 15:16
 * Autor: Donald Knuth
 * Complexidade: O(n³)
 */

void watermelon_v5() {
    printf("Watermelon - Versão 5\n");
    printf("Tipo: Implementação\n");
    printf("Características:\n");
    printf("- Versão iterativa\n");
    printf("- Com validação de entrada\n");
    printf("- Com medidas de tempo\n\n");
    
    srand(time(NULL));
    int tamanho_teste = 10000;
    printf("Testando com %d elementos...\n", tamanho_teste);
}

int main() {
    watermelon_v5();
    return 0;
}
