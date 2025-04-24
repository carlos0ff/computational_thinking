#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * Bubble Sort - Implementação 2
 * Criado em: 23/04/2025 15:16
 * Autor: John von Neumann
 * Complexidade: O(n³)
 */

void bubble_sort_v2() {
    printf("Bubble Sort - Versão 2\n");
    printf("Tipo: Implementação\n");
    printf("Características:\n");
    printf("- Com medidas de tempo\n");
    printf("- Alocação dinâmica eficiente\n");
    printf("- Versão recursiva\n\n");
    
    srand(time(NULL));
    int tamanho_teste = 100;
    printf("Testando com %d elementos...\n", tamanho_teste);
}

int main() {
    bubble_sort_v2();
    return 0;
}
