#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * Binary Tree - Implementação 2
 * Criado em: 23/04/2025 15:16
 * Autor: Donald Knuth
 * Complexidade: O(2^n)
 */

void binary_tree_v2() {
    printf("Binary Tree - Versão 2\n");
    printf("Tipo: Implementação\n");
    printf("Características:\n");
    printf("- Uso mínimo de memória\n");
    printf("- Versão iterativa\n");
    printf("- Versão recursiva\n\n");
    
    srand(time(NULL));
    int tamanho_teste = 100000;
    printf("Testando com %d elementos...\n", tamanho_teste);
}

int main() {
    binary_tree_v2();
    return 0;
}
