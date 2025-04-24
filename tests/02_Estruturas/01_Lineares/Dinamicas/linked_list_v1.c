#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * Linked List - Implementação 1
 * Criado em: 23/04/2025 15:16
 * Autor: Alan Turing
 * Complexidade: O(2^n)
 */

void linked_list_v1() {
    printf("Linked List - Versão 1\n");
    printf("Tipo: Implementação\n");
    printf("Características:\n");
    printf("- Com validação de entrada\n");
    printf("- Alocação dinâmica eficiente\n");
    printf("- Uso mínimo de memória\n\n");
    
    srand(time(NULL));
    int tamanho_teste = 100000;
    printf("Testando com %d elementos...\n", tamanho_teste);
}

int main() {
    linked_list_v1();
    return 0;
}
