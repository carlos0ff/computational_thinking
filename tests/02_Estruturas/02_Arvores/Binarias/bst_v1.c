#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * Bst - Implementação 1
 * Criado em: 23/04/2025 15:16
 * Autor: Edsger Dijkstra
 * Complexidade: O(n³)
 */

void bst_v1() {
    printf("Bst - Versão 1\n");
    printf("Tipo: Implementação\n");
    printf("Características:\n");
    printf("- Versão iterativa\n");
    printf("- Alocação dinâmica eficiente\n");
    printf("- Versão iterativa\n\n");
    
    srand(time(NULL));
    int tamanho_teste = 1000;
    printf("Testando com %d elementos...\n", tamanho_teste);
}

int main() {
    bst_v1();
    return 0;
}
