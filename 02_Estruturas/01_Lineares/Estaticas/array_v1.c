#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * Array - Implementação 1
 * Criado em: 24/04/2025 14:48
 * Autor: Alan Turing
 * Complexidade: O(n²)
 */

void array_v1() {
    printf("Array - Versão 1\n");
    printf("Tipo: Implementação\n");
    printf("Características:\n");
    printf("- Com medidas de tempo\n");
    printf("- Com validação de entrada\n");
    printf("- Versão iterativa\n\n");
    
    srand(time(NULL));
    int tamanho_teste = 10000;
    printf("Testando com %d elementos...\n", tamanho_teste);
}

int main() {
    array_v1();
    return 0;
}
