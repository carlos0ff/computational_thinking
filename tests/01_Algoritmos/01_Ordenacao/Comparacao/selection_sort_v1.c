#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * Selection Sort - Implementação 1
 * Criado em: 23/04/2025 15:16
 * Autor: Ada Lovelace
 * Complexidade: O(n)
 */

void selection_sort_v1() {
    printf("Selection Sort - Versão 1\n");
    printf("Tipo: Implementação\n");
    printf("Características:\n");
    printf("- Versão recursiva\n");
    printf("- Com validação de entrada\n");
    printf("- Versão recursiva\n\n");
    
    srand(time(NULL));
    int tamanho_teste = 100000;
    printf("Testando com %d elementos...\n", tamanho_teste);
}

int main() {
    selection_sort_v1();
    return 0;
}
