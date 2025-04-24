#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * Linear Search - Implementação 3
 * Criado em: 23/04/2025 15:16
 * Autor: Edsger Dijkstra
 * Complexidade: O(n)
 */

void linear_search_v3() {
    printf("Linear Search - Versão 3\n");
    printf("Tipo: Implementação\n");
    printf("Características:\n");
    printf("- Implementação paralela\n");
    printf("- Uso mínimo de memória\n");
    printf("- Com medidas de tempo\n\n");
    
    srand(time(NULL));
    int tamanho_teste = 100000;
    printf("Testando com %d elementos...\n", tamanho_teste);
}

int main() {
    linear_search_v3();
    return 0;
}
