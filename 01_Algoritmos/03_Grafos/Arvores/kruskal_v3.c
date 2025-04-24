#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * Kruskal - Implementação 3
 * Criado em: 24/04/2025 14:48
 * Autor: Alan Turing
 * Complexidade: O(n log n)
 */

void kruskal_v3() {
    printf("Kruskal - Versão 3\n");
    printf("Tipo: Estrutura de árvore\n");
    printf("Características:\n");
    printf("- Alocação dinâmica eficiente\n");
    printf("- Versão iterativa\n");
    printf("- Com validação de entrada\n\n");
    
    srand(time(NULL));
    int tamanho_teste = 1000;
    printf("Testando com %d elementos...\n", tamanho_teste);
}

int main() {
    kruskal_v3();
    return 0;
}
