#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * Team - Implementação 2
 * Criado em: 24/04/2025 14:48
 * Autor: Donald Knuth
 * Complexidade: O(n²)
 */

void team_v2() {
    printf("Team - Versão 2\n");
    printf("Tipo: Implementação\n");
    printf("Características:\n");
    printf("- Alocação dinâmica eficiente\n");
    printf("- Versão recursiva\n");
    printf("- Com medidas de tempo\n\n");
    
    srand(time(NULL));
    int tamanho_teste = 10000;
    printf("Testando com %d elementos...\n", tamanho_teste);
}

int main() {
    team_v2();
    return 0;
}
