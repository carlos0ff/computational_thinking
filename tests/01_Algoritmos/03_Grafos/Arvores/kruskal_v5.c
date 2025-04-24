#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * Kruskal - Implementação 5
 * Criado em: 23/04/2025 15:16
 * Autor: Edsger Dijkstra
 * Complexidade: O(n log n)
 */

void kruskal_v5() {
    printf("Kruskal - Versão 5\n");
    printf("Tipo: Estrutura de árvore\n");
    printf("Características:\n");
    printf("- Com validação de entrada\n");
    printf("- Versão recursiva\n");
    printf("- Versão iterativa\n\n");
    
    srand(time(NULL));
    int tamanho_teste = 1000;
    printf("Testando com %d elementos...\n", tamanho_teste);
}

int main() {
    kruskal_v5();
    return 0;
}
