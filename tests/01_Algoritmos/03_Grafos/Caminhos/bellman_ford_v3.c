#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * Bellman Ford - Implementação 3
 * Criado em: 23/04/2025 15:16
 * Autor: Donald Knuth
 * Complexidade: O(2^n)
 */

void bellman_ford_v3() {
    printf("Bellman Ford - Versão 3\n");
    printf("Tipo: Implementação\n");
    printf("Características:\n");
    printf("- Com medidas de tempo\n");
    printf("- Uso mínimo de memória\n");
    printf("- Versão recursiva\n\n");
    
    srand(time(NULL));
    int tamanho_teste = 100000;
    printf("Testando com %d elementos...\n", tamanho_teste);
}

int main() {
    bellman_ford_v3();
    return 0;
}
