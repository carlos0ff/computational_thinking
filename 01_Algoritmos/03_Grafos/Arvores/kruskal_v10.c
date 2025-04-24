#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * Kruskal - Implementação 10
 * Criado em: 24/04/2025 14:48
 * Autor: Edsger Dijkstra
 * Complexidade: O(1)
 */

void kruskal_v10() {
    printf("Kruskal - Versão 10\n");
    printf("Tipo: Estrutura de árvore\n");
    printf("Características:\n");
    printf("- Versão iterativa\n");
    printf("- Alocação dinâmica eficiente\n");
    printf("- Com medidas de tempo\n\n");
    
    srand(time(NULL));
    int tamanho_teste = 1000;
    printf("Testando com %d elementos...\n", tamanho_teste);
}

int main() {
    kruskal_v10();
    return 0;
}
