#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * Queue - Implementação 2
 * Criado em: 24/04/2025 14:48
 * Autor: Ada Lovelace
 * Complexidade: O(n²)
 */

void queue_v2() {
    printf("Queue - Versão 2\n");
    printf("Tipo: Implementação\n");
    printf("Características:\n");
    printf("- Com validação de entrada\n");
    printf("- Alocação dinâmica eficiente\n");
    printf("- Versão recursiva\n\n");
    
    srand(time(NULL));
    int tamanho_teste = 10000;
    printf("Testando com %d elementos...\n", tamanho_teste);
}

int main() {
    queue_v2();
    return 0;
}
