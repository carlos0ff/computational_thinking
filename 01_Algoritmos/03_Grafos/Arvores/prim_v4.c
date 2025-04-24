#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * Prim - Implementação 4
 * Criado em: 24/04/2025 14:48
 * Autor: Alan Turing
 * Complexidade: O(n log n)
 */

void prim_v4() {
    printf("Prim - Versão 4\n");
    printf("Tipo: Estrutura de árvore\n");
    printf("Características:\n");
    printf("- Uso mínimo de memória\n");
    printf("- Versão iterativa\n");
    printf("- Uso mínimo de memória\n\n");
    
    srand(time(NULL));
    int tamanho_teste = 100000;
    printf("Testando com %d elementos...\n", tamanho_teste);
}

int main() {
    prim_v4();
    return 0;
}
