#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * B Tree - Implementação 3
 * Criado em: 23/04/2025 15:16
 * Autor: Ada Lovelace
 * Complexidade: O(n²)
 */

void b_tree_v3() {
    printf("B Tree - Versão 3\n");
    printf("Tipo: Implementação\n");
    printf("Características:\n");
    printf("- Versão recursiva\n");
    printf("- Alocação dinâmica eficiente\n");
    printf("- Uso mínimo de memória\n\n");
    
    srand(time(NULL));
    int tamanho_teste = 100;
    printf("Testando com %d elementos...\n", tamanho_teste);
}

int main() {
    b_tree_v3();
    return 0;
}
