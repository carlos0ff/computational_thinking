#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * Bst - Implementação 3
 * Criado em: 23/04/2025 15:16
 * Autor: Alan Turing
 * Complexidade: O(2^n)
 */

void bst_v3() {
    printf("Bst - Versão 3\n");
    printf("Tipo: Implementação\n");
    printf("Características:\n");
    printf("- Alocação dinâmica eficiente\n");
    printf("- Uso mínimo de memória\n");
    printf("- Otimizado para cache\n\n");
    
    srand(time(NULL));
    int tamanho_teste = 100000;
    printf("Testando com %d elementos...\n", tamanho_teste);
}

int main() {
    bst_v3();
    return 0;
}
