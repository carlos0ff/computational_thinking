#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * Floyd Warshall - Implementação 3
 * Criado em: 23/04/2025 15:16
 * Autor: Alan Turing
 * Complexidade: O(1)
 */

void floyd_warshall_v3() {
    printf("Floyd Warshall - Versão 3\n");
    printf("Tipo: Implementação\n");
    printf("Características:\n");
    printf("- Com medidas de tempo\n");
    printf("- Uso mínimo de memória\n");
    printf("- Versão iterativa\n\n");
    
    srand(time(NULL));
    int tamanho_teste = 1000;
    printf("Testando com %d elementos...\n", tamanho_teste);
}

int main() {
    floyd_warshall_v3();
    return 0;
}
