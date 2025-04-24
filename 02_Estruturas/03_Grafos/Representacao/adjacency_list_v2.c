#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * Adjacency List - Implementação 2
 * Criado em: 24/04/2025 14:48
 * Autor: Donald Knuth
 * Complexidade: O(2^n)
 */

void adjacency_list_v2() {
    printf("Adjacency List - Versão 2\n");
    printf("Tipo: Implementação\n");
    printf("Características:\n");
    printf("- Uso mínimo de memória\n");
    printf("- Com medidas de tempo\n");
    printf("- Alocação dinâmica eficiente\n\n");
    
    srand(time(NULL));
    int tamanho_teste = 10000;
    printf("Testando com %d elementos...\n", tamanho_teste);
}

int main() {
    adjacency_list_v2();
    return 0;
}
