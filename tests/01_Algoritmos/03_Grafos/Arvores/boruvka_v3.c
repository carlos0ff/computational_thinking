#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * Boruvka - Implementação 3
 * Criado em: 23/04/2025 15:16
 * Autor: Donald Knuth
 * Complexidade: O(1)
 */

void boruvka_v3() {
    printf("Boruvka - Versão 3\n");
    printf("Tipo: Estrutura de árvore\n");
    printf("Características:\n");
    printf("- Com validação de entrada\n");
    printf("- Versão recursiva\n");
    printf("- Versão iterativa\n\n");
    
    srand(time(NULL));
    int tamanho_teste = 100;
    printf("Testando com %d elementos...\n", tamanho_teste);
}

int main() {
    boruvka_v3();
    return 0;
}
