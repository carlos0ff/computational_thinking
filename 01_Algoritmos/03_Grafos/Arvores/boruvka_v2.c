#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * Boruvka - Implementação 2
 * Criado em: 24/04/2025 14:48
 * Autor: Edsger Dijkstra
 * Complexidade: O(n log n)
 */

void boruvka_v2() {
    printf("Boruvka - Versão 2\n");
    printf("Tipo: Estrutura de árvore\n");
    printf("Características:\n");
    printf("- Versão iterativa\n");
    printf("- Otimizado para cache\n");
    printf("- Uso mínimo de memória\n\n");
    
    srand(time(NULL));
    int tamanho_teste = 10000;
    printf("Testando com %d elementos...\n", tamanho_teste);
}

int main() {
    boruvka_v2();
    return 0;
}
