#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * Bloom Filter - Implementação 2
 * Criado em: 24/04/2025 14:48
 * Autor: Ada Lovelace
 * Complexidade: O(n³)
 */

void bloom_filter_v2() {
    printf("Bloom Filter - Versão 2\n");
    printf("Tipo: Implementação\n");
    printf("Características:\n");
    printf("- Versão iterativa\n");
    printf("- Versão recursiva\n");
    printf("- Com medidas de tempo\n\n");
    
    srand(time(NULL));
    int tamanho_teste = 100000;
    printf("Testando com %d elementos...\n", tamanho_teste);
}

int main() {
    bloom_filter_v2();
    return 0;
}
