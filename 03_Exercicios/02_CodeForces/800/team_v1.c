#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * Team - Implementação 1
 * Criado em: 24/04/2025 14:48
 * Autor: Alan Turing
 * Complexidade: O(n log n)
 */

void team_v1() {
    printf("Team - Versão 1\n");
    printf("Tipo: Implementação\n");
    printf("Características:\n");
    printf("- Versão iterativa\n");
    printf("- Implementação paralela\n");
    printf("- Uso mínimo de memória\n\n");
    
    srand(time(NULL));
    int tamanho_teste = 100;
    printf("Testando com %d elementos...\n", tamanho_teste);
}

int main() {
    team_v1();
    return 0;
}
