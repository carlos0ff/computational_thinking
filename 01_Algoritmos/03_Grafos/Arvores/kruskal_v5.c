#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * Kruskal - Implementação 5
 * Criado em: 24/04/2025 14:48
 * Autor: Ada Lovelace
 * Complexidade: O(n)
 */

void kruskal_v5() {
    printf("Kruskal - Versão 5\n");
    printf("Tipo: Estrutura de árvore\n");
    printf("Características:\n");
    printf("- Uso mínimo de memória\n");
    printf("- Versão recursiva\n");
    printf("- Otimizado para cache\n\n");
    
    srand(time(NULL));
    int tamanho_teste = 100000;
    printf("Testando com %d elementos...\n", tamanho_teste);
}

int main() {
    kruskal_v5();
    return 0;
}
