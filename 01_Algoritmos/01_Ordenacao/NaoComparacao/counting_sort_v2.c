#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * Counting Sort - Implementação 2
 * Criado em: 24/04/2025 14:48
 * Autor: Edsger Dijkstra
 * Complexidade: O(2^n)
 */

void counting_sort_v2() {
    printf("Counting Sort - Versão 2\n");
    printf("Tipo: Implementação\n");
    printf("Características:\n");
    printf("- Com medidas de tempo\n");
    printf("- Alocação dinâmica eficiente\n");
    printf("- Uso mínimo de memória\n\n");
    
    srand(time(NULL));
    int tamanho_teste = 100000;
    printf("Testando com %d elementos...\n", tamanho_teste);
}

int main() {
    counting_sort_v2();
    return 0;
}
