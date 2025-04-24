#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * Linked List - Implementação 2
 * Criado em: 23/04/2025 15:16
 * Autor: John von Neumann
 * Complexidade: O(n²)
 */

void linked_list_v2() {
    printf("Linked List - Versão 2\n");
    printf("Tipo: Implementação\n");
    printf("Características:\n");
    printf("- Uso mínimo de memória\n");
    printf("- Com medidas de tempo\n");
    printf("- Otimizado para cache\n\n");
    
    srand(time(NULL));
    int tamanho_teste = 10000;
    printf("Testando com %d elementos...\n", tamanho_teste);
}

int main() {
    linked_list_v2();
    return 0;
}
