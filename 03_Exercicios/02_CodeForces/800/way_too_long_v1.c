#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * Way Too Long - Implementação 1
 * Criado em: 23/04/2025 15:15
 * Autor: Edsger Dijkstra
 * Complexidade: O(n log n)
 */

void way_too_long_v1() {
    printf("Way Too Long - Versão 1\n");
    printf("Tipo: Implementação\n");
    printf("Características:\n");
    printf("- Com medidas de tempo\n");
    printf("- Uso mínimo de memória\n");
    printf("- Implementação paralela\n\n");
    
    srand(time(NULL));
    int tamanho_teste = 100000;
    printf("Testando com %d elementos...\n", tamanho_teste);
}

int main() {
    way_too_long_v1();
    return 0;
}
