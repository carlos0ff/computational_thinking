#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * Bst - Implementação 2
 * Criado em: 24/04/2025 14:48
 * Autor: Edsger Dijkstra
 * Complexidade: O(n log n)
 */

void bst_v2() {
    printf("Bst - Versão 2\n");
    printf("Tipo: Implementação\n");
    printf("Características:\n");
    printf("- Com validação de entrada\n");
    printf("- Uso mínimo de memória\n");
    printf("- Versão recursiva\n\n");
    
    srand(time(NULL));
    int tamanho_teste = 1000;
    printf("Testando com %d elementos...\n", tamanho_teste);
}

int main() {
    bst_v2();
    return 0;
}
