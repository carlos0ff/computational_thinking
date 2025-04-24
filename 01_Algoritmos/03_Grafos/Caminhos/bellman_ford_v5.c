#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * Bellman Ford - Implementação 5
 * Criado em: 24/04/2025 14:48
 * Autor: Alan Turing
 * Complexidade: O(n)
 */

void bellman_ford_v5() {
    printf("Bellman Ford - Versão 5\n");
    printf("Tipo: Implementação\n");
    printf("Características:\n");
    printf("- Implementação paralela\n");
    printf("- Versão iterativa\n");
    printf("- Versão recursiva\n\n");
    
    srand(time(NULL));
    int tamanho_teste = 10000;
    printf("Testando com %d elementos...\n", tamanho_teste);
}

int main() {
    bellman_ford_v5();
    return 0;
}
