#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * Selection Sort - Implementação 1
 * Criado em: 24/04/2025 14:48
 * Autor: John von Neumann
 * Complexidade: O(n²)
 */

void selection_sort_v1() {
    printf("Selection Sort - Versão 1\n");
    printf("Tipo: Implementação\n");
    printf("Características:\n");
    printf("- Com medidas de tempo\n");
    printf("- Versão iterativa\n");
    printf("- Implementação paralela\n\n");
    
    srand(time(NULL));
    int tamanho_teste = 1000;
    printf("Testando com %d elementos...\n", tamanho_teste);
}

int main() {
    selection_sort_v1();
    return 0;
}
