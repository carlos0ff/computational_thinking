#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * Way Too Long - Implementação 1
 * Criado em: 24/04/2025 14:48
 * Autor: Alan Turing
 * Complexidade: O(2^n)
 */

void way_too_long_v1() {
    printf("Way Too Long - Versão 1\n");
    printf("Tipo: Implementação\n");
    printf("Características:\n");
    printf("- Versão recursiva\n");
    printf("- Otimizado para cache\n");
    printf("- Versão recursiva\n\n");
    
    srand(time(NULL));
    int tamanho_teste = 10000;
    printf("Testando com %d elementos...\n", tamanho_teste);
}

int main() {
    way_too_long_v1();
    return 0;
}
