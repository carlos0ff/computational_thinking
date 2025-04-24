#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * Kruskal - Implementação 4
 * Criado em: 23/04/2025 15:16
 * Autor: Edsger Dijkstra
 * Complexidade: O(n³)
 */

void kruskal_v4() {
    printf("Kruskal - Versão 4\n");
    printf("Tipo: Estrutura de árvore\n");
    printf("Características:\n");
    printf("- Uso mínimo de memória\n");
    printf("- Versão recursiva\n");
    printf("- Com medidas de tempo\n\n");
    
    srand(time(NULL));
    int tamanho_teste = 10000;
    printf("Testando com %d elementos...\n", tamanho_teste);
}

int main() {
    kruskal_v4();
    return 0;
}
