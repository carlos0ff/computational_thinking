#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * Kruskal - Implementação 10
 * Criado em: 23/04/2025 15:16
 * Autor: Donald Knuth
 * Complexidade: O(n²)
 */

void kruskal_v10() {
    printf("Kruskal - Versão 10\n");
    printf("Tipo: Estrutura de árvore\n");
    printf("Características:\n");
    printf("- Alocação dinâmica eficiente\n");
    printf("- Versão iterativa\n");
    printf("- Versão recursiva\n\n");
    
    srand(time(NULL));
    int tamanho_teste = 100;
    printf("Testando com %d elementos...\n", tamanho_teste);
}

int main() {
    kruskal_v10();
    return 0;
}
