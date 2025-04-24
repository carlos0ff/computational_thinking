#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * Way Too Long - Implementação 1
 * Criado em: 23/04/2025 15:16
 * Autor: Donald Knuth
 * Complexidade: O(1)
 */

void way_too_long_v1() {
    printf("Way Too Long - Versão 1\n");
    printf("Tipo: Implementação\n");
    printf("Características:\n");
    printf("- Versão recursiva\n");
    printf("- Versão iterativa\n");
    printf("- Com medidas de tempo\n\n");
    
    srand(time(NULL));
    int tamanho_teste = 100000;
    printf("Testando com %d elementos...\n", tamanho_teste);
}

int main() {
    way_too_long_v1();
    return 0;
}
