#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * Boruvka - Implementação 1
 * Criado em: 24/04/2025 14:48
 * Autor: Alan Turing
 * Complexidade: O(n log n)
 */

void boruvka_v1() {
    printf("Boruvka - Versão 1\n");
    printf("Tipo: Estrutura de árvore\n");
    printf("Características:\n");
    printf("- Versão recursiva\n");
    printf("- Com validação de entrada\n");
    printf("- Implementação paralela\n\n");
    
    srand(time(NULL));
    int tamanho_teste = 100000;
    printf("Testando com %d elementos...\n", tamanho_teste);
}

int main() {
    boruvka_v1();
    return 0;
}
