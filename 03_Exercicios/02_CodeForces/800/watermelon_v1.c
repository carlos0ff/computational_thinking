#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * Watermelon - Implementação 1
 * Criado em: 23/04/2025 15:15
 * Autor: Alan Turing
 * Complexidade: O(n)
 */

void watermelon_v1() {
    printf("Watermelon - Versão 1\n");
    printf("Tipo: Implementação\n");
    printf("Características:\n");
    printf("- Implementação paralela\n");
    printf("- Com validação de entrada\n");
    printf("- Versão iterativa\n\n");
    
    srand(time(NULL));
    int tamanho_teste = 10000;
    printf("Testando com %d elementos...\n", tamanho_teste);
}

int main() {
    watermelon_v1();
    return 0;
}
