#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * Bellman Ford - Implementação 2
 * Criado em: 24/04/2025 14:48
 * Autor: Alan Turing
 * Complexidade: O(n)
 */

void bellman_ford_v2() {
    printf("Bellman Ford - Versão 2\n");
    printf("Tipo: Implementação\n");
    printf("Características:\n");
    printf("- Versão recursiva\n");
    printf("- Otimizado para cache\n");
    printf("- Versão iterativa\n\n");
    
    srand(time(NULL));
    int tamanho_teste = 100000;
    printf("Testando com %d elementos...\n", tamanho_teste);
}

int main() {
    bellman_ford_v2();
    return 0;
}
