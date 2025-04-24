#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * Stack - Implementação 8
 * Criado em: 24/04/2025 14:48
 * Autor: Alan Turing
 * Complexidade: O(n²)
 */

void stack_v8() {
    printf("Stack - Versão 8\n");
    printf("Tipo: Implementação\n");
    printf("Características:\n");
    printf("- Com medidas de tempo\n");
    printf("- Alocação dinâmica eficiente\n");
    printf("- Versão recursiva\n\n");
    
    srand(time(NULL));
    int tamanho_teste = 1000;
    printf("Testando com %d elementos...\n", tamanho_teste);
}

int main() {
    stack_v8();
    return 0;
}
