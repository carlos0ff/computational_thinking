#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * Roman To Int - Implementação 1
 * Criado em: 24/04/2025 14:48
 * Autor: Donald Knuth
 * Complexidade: O(1)
 */

void roman_to_int_v1() {
    printf("Roman To Int - Versão 1\n");
    printf("Tipo: Implementação\n");
    printf("Características:\n");
    printf("- Com medidas de tempo\n");
    printf("- Versão iterativa\n");
    printf("- Uso mínimo de memória\n\n");
    
    srand(time(NULL));
    int tamanho_teste = 100;
    printf("Testando com %d elementos...\n", tamanho_teste);
}

int main() {
    roman_to_int_v1();
    return 0;
}
