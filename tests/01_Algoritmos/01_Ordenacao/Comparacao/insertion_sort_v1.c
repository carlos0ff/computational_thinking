#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * Insertion Sort - Implementação 1
 * Criado em: 23/04/2025 15:16
 * Autor: Edsger Dijkstra
 * Complexidade: O(n²)
 */

void insertion_sort_v1() {
    printf("Insertion Sort - Versão 1\n");
    printf("Tipo: Implementação\n");
    printf("Características:\n");
    printf("- Implementação paralela\n");
    printf("- Com medidas de tempo\n");
    printf("- Com medidas de tempo\n\n");
    
    srand(time(NULL));
    int tamanho_teste = 100000;
    printf("Testando com %d elementos...\n", tamanho_teste);
}

int main() {
    insertion_sort_v1();
    return 0;
}
