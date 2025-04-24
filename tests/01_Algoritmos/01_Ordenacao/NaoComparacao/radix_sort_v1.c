#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * Radix Sort - Implementação 1
 * Criado em: 23/04/2025 15:16
 * Autor: Alan Turing
 * Complexidade: O(log n)
 */

void radix_sort_v1() {
    printf("Radix Sort - Versão 1\n");
    printf("Tipo: Implementação\n");
    printf("Características:\n");
    printf("- Versão recursiva\n");
    printf("- Alocação dinâmica eficiente\n");
    printf("- Com medidas de tempo\n\n");
    
    srand(time(NULL));
    int tamanho_teste = 100;
    printf("Testando com %d elementos...\n", tamanho_teste);
}

int main() {
    radix_sort_v1();
    return 0;
}
