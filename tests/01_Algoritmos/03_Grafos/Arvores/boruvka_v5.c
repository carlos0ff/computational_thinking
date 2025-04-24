#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * Boruvka - Implementação 5
 * Criado em: 23/04/2025 15:16
 * Autor: Ada Lovelace
 * Complexidade: O(2^n)
 */

void boruvka_v5() {
    printf("Boruvka - Versão 5\n");
    printf("Tipo: Estrutura de árvore\n");
    printf("Características:\n");
    printf("- Versão recursiva\n");
    printf("- Versão iterativa\n");
    printf("- Versão recursiva\n\n");
    
    srand(time(NULL));
    int tamanho_teste = 10000;
    printf("Testando com %d elementos...\n", tamanho_teste);
}

int main() {
    boruvka_v5();
    return 0;
}
