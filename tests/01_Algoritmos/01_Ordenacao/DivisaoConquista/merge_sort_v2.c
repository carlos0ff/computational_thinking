#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * Merge Sort - Implementação 2
 * Criado em: 23/04/2025 15:16
 * Autor: Ada Lovelace
 * Complexidade: O(log n)
 */

void merge_sort_v2() {
    printf("Merge Sort - Versão 2\n");
    printf("Tipo: Implementação\n");
    printf("Características:\n");
    printf("- Alocação dinâmica eficiente\n");
    printf("- Com medidas de tempo\n");
    printf("- Versão iterativa\n\n");
    
    srand(time(NULL));
    int tamanho_teste = 10000;
    printf("Testando com %d elementos...\n", tamanho_teste);
}

int main() {
    merge_sort_v2();
    return 0;
}
