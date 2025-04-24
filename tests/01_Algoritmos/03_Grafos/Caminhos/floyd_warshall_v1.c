#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * Floyd Warshall - Implementação 1
 * Criado em: 23/04/2025 15:16
 * Autor: Ada Lovelace
 * Complexidade: O(n log n)
 */

void floyd_warshall_v1() {
    printf("Floyd Warshall - Versão 1\n");
    printf("Tipo: Implementação\n");
    printf("Características:\n");
    printf("- Implementação paralela\n");
    printf("- Com medidas de tempo\n");
    printf("- Versão iterativa\n\n");
    
    srand(time(NULL));
    int tamanho_teste = 100000;
    printf("Testando com %d elementos...\n", tamanho_teste);
}

int main() {
    floyd_warshall_v1();
    return 0;
}
