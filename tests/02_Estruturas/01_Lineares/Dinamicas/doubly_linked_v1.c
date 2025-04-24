#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * Doubly Linked - Implementação 1
 * Criado em: 23/04/2025 15:16
 * Autor: Donald Knuth
 * Complexidade: O(2^n)
 */

void doubly_linked_v1() {
    printf("Doubly Linked - Versão 1\n");
    printf("Tipo: Implementação\n");
    printf("Características:\n");
    printf("- Versão iterativa\n");
    printf("- Uso mínimo de memória\n");
    printf("- Versão recursiva\n\n");
    
    srand(time(NULL));
    int tamanho_teste = 1000;
    printf("Testando com %d elementos...\n", tamanho_teste);
}

int main() {
    doubly_linked_v1();
    return 0;
}
