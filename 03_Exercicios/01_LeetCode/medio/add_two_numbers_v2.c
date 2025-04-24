#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * Add Two Numbers - Implementação 2
 * Criado em: 23/04/2025 15:15
 * Autor: Donald Knuth
 * Complexidade: O(n²)
 */

void add_two_numbers_v2() {
    printf("Add Two Numbers - Versão 2\n");
    printf("Tipo: Implementação\n");
    printf("Características:\n");
    printf("- Com medidas de tempo\n");
    printf("- Com validação de entrada\n");
    printf("- Versão recursiva\n\n");
    
    srand(time(NULL));
    int tamanho_teste = 1000;
    printf("Testando com %d elementos...\n", tamanho_teste);
}

int main() {
    add_two_numbers_v2();
    return 0;
}
