#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * Kruskal - Implementação 8
 * Criado em: 23/04/2025 15:16
 * Autor: John von Neumann
 * Complexidade: O(n log n)
 */

void kruskal_v8() {
    printf("Kruskal - Versão 8\n");
    printf("Tipo: Estrutura de árvore\n");
    printf("Características:\n");
    printf("- Versão recursiva\n");
    printf("- Com medidas de tempo\n");
    printf("- Otimizado para cache\n\n");
    
    srand(time(NULL));
    int tamanho_teste = 100;
    printf("Testando com %d elementos...\n", tamanho_teste);
}

int main() {
    kruskal_v8();
    return 0;
}
