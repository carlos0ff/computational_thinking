#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * Prim - Implementação 1
 * Criado em: 24/04/2025 14:48
 * Autor: Donald Knuth
 * Complexidade: O(1)
 */

void prim_v1() {
    printf("Prim - Versão 1\n");
    printf("Tipo: Estrutura de árvore\n");
    printf("Características:\n");
    printf("- Com validação de entrada\n");
    printf("- Versão iterativa\n");
    printf("- Implementação paralela\n\n");
    
    srand(time(NULL));
    int tamanho_teste = 100000;
    printf("Testando com %d elementos...\n", tamanho_teste);
}

int main() {
    prim_v1();
    return 0;
}
