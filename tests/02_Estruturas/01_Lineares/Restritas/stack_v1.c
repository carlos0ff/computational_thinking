#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * Stack - Implementação 1
 * Criado em: 23/04/2025 15:16
 * Autor: Ada Lovelace
 * Complexidade: O(2^n)
 */

void stack_v1() {
    printf("Stack - Versão 1\n");
    printf("Tipo: Implementação\n");
    printf("Características:\n");
    printf("- Implementação paralela\n");
    printf("- Versão iterativa\n");
    printf("- Versão recursiva\n\n");
    
    srand(time(NULL));
    int tamanho_teste = 100;
    printf("Testando com %d elementos...\n", tamanho_teste);
}

int main() {
    stack_v1();
    return 0;
}
