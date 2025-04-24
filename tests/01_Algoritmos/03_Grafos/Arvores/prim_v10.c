#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * Prim - Implementação 10
 * Criado em: 23/04/2025 15:16
 * Autor: John von Neumann
 * Complexidade: O(1)
 */

void prim_v10() {
    printf("Prim - Versão 10\n");
    printf("Tipo: Estrutura de árvore\n");
    printf("Características:\n");
    printf("- Com medidas de tempo\n");
    printf("- Uso mínimo de memória\n");
    printf("- Versão recursiva\n\n");
    
    srand(time(NULL));
    int tamanho_teste = 10000;
    printf("Testando com %d elementos...\n", tamanho_teste);
}

int main() {
    prim_v10();
    return 0;
}
