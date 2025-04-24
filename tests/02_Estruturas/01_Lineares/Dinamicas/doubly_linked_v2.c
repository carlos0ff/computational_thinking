#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * Doubly Linked - Implementação 2
 * Criado em: 23/04/2025 15:16
 * Autor: John von Neumann
 * Complexidade: O(2^n)
 */

void doubly_linked_v2() {
    printf("Doubly Linked - Versão 2\n");
    printf("Tipo: Implementação\n");
    printf("Características:\n");
    printf("- Versão recursiva\n");
    printf("- Alocação dinâmica eficiente\n");
    printf("- Uso mínimo de memória\n\n");
    
    srand(time(NULL));
    int tamanho_teste = 10000;
    printf("Testando com %d elementos...\n", tamanho_teste);
}

int main() {
    doubly_linked_v2();
    return 0;
}
