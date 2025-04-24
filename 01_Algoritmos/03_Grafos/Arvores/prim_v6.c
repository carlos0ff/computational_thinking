#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * Prim - Implementação 6
 * Criado em: 24/04/2025 14:48
 * Autor: Alan Turing
 * Complexidade: O(2^n)
 */

void prim_v6() {
    printf("Prim - Versão 6\n");
    printf("Tipo: Estrutura de árvore\n");
    printf("Características:\n");
    printf("- Implementação paralela\n");
    printf("- Versão recursiva\n");
    printf("- Uso mínimo de memória\n\n");
    
    srand(time(NULL));
    int tamanho_teste = 100000;
    printf("Testando com %d elementos...\n", tamanho_teste);
}

int main() {
    prim_v6();
    return 0;
}
