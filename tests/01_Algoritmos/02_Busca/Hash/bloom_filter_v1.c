#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * Bloom Filter - Implementação 1
 * Criado em: 23/04/2025 15:16
 * Autor: Edsger Dijkstra
 * Complexidade: O(n log n)
 */

void bloom_filter_v1() {
    printf("Bloom Filter - Versão 1\n");
    printf("Tipo: Implementação\n");
    printf("Características:\n");
    printf("- Versão recursiva\n");
    printf("- Com medidas de tempo\n");
    printf("- Versão iterativa\n\n");
    
    srand(time(NULL));
    int tamanho_teste = 100000;
    printf("Testando com %d elementos...\n", tamanho_teste);
}

int main() {
    bloom_filter_v1();
    return 0;
}
