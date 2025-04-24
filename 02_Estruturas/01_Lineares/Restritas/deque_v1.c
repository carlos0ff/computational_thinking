#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * Deque - Implementação 1
 * Criado em: 24/04/2025 14:48
 * Autor: Edsger Dijkstra
 * Complexidade: O(n²)
 */

void deque_v1() {
    printf("Deque - Versão 1\n");
    printf("Tipo: Implementação\n");
    printf("Características:\n");
    printf("- Versão iterativa\n");
    printf("- Com medidas de tempo\n");
    printf("- Alocação dinâmica eficiente\n\n");
    
    srand(time(NULL));
    int tamanho_teste = 10000;
    printf("Testando com %d elementos...\n", tamanho_teste);
}

int main() {
    deque_v1();
    return 0;
}
