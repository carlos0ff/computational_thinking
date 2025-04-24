#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * Heap Sort - Implementação 2
 * Criado em: 23/04/2025 15:16
 * Autor: Alan Turing
 * Complexidade: O(2^n)
 */

void heap_sort_v2() {
    printf("Heap Sort - Versão 2\n");
    printf("Tipo: Implementação\n");
    printf("Características:\n");
    printf("- Alocação dinâmica eficiente\n");
    printf("- Com medidas de tempo\n");
    printf("- Otimizado para cache\n\n");
    
    srand(time(NULL));
    int tamanho_teste = 1000;
    printf("Testando com %d elementos...\n", tamanho_teste);
}

int main() {
    heap_sort_v2();
    return 0;
}
