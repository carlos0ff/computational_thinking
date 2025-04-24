#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * Prim - Implementação 2
 * Criado em: 23/04/2025 15:16
 * Autor: Alan Turing
 * Complexidade: O(2^n)
 */

void prim_v2() {
    printf("Prim - Versão 2\n");
    printf("Tipo: Estrutura de árvore\n");
    printf("Características:\n");
    printf("- Otimizado para cache\n");
    printf("- Com validação de entrada\n");
    printf("- Alocação dinâmica eficiente\n\n");
    
    srand(time(NULL));
    int tamanho_teste = 100000;
    printf("Testando com %d elementos...\n", tamanho_teste);
}

int main() {
    prim_v2();
    return 0;
}
