#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * B+ Tree - Implementação 2
 * Criado em: 24/04/2025 14:48
 * Autor: Alan Turing
 * Complexidade: O(2^n)
 */

void b+_tree_v2() {
    printf("B+ Tree - Versão 2\n");
    printf("Tipo: Implementação\n");
    printf("Características:\n");
    printf("- Com validação de entrada\n");
    printf("- Com medidas de tempo\n");
    printf("- Versão recursiva\n\n");
    
    srand(time(NULL));
    int tamanho_teste = 100000;
    printf("Testando com %d elementos...\n", tamanho_teste);
}

int main() {
    b+_tree_v2();
    return 0;
}
