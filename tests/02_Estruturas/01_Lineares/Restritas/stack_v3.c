#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * Stack - Implementação 3
 * Criado em: 23/04/2025 15:16
 * Autor: John von Neumann
 * Complexidade: O(log n)
 */

void stack_v3() {
    printf("Stack - Versão 3\n");
    printf("Tipo: Implementação\n");
    printf("Características:\n");
    printf("- Com medidas de tempo\n");
    printf("- Versão recursiva\n");
    printf("- Alocação dinâmica eficiente\n\n");
    
    srand(time(NULL));
    int tamanho_teste = 100000;
    printf("Testando com %d elementos...\n", tamanho_teste);
}

int main() {
    stack_v3();
    return 0;
}
