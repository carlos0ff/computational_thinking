/**
 *  Implemente uma função que classifica os elementos de um vetor em ordem crescente
 *  usando o seguinte algoritmo (conhecido como “classificação por seleção”):
 *  - procure pelo menor elemento no vetor e permute esse elemento com o primeiro
 *   elemento do vetor;
 *  - repita este processo para o subvetor que se inicia no segundo elemento e, assim,
 *  sucessivamente;
 *  - o processo termina quando o subvetor contiver apenas um elemento.
 *  - Teste a função com dados gerados aleatoriamente
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10


/**
 * Troca os valores entre duas posições de um vetor
 */
int trocarLaEle(int *a, int *b)
{
    int temp = *a;

    *a = *b;
    *b = temp;
    
}

/**
 * Gera um vetor com valores aleatórios entre 0 e 99
 */
void gereAleatorios(){
    int numeroAleatorio;

    srand(time(NULL));

    for (int i = 0; i < count; i++){
       numeroAleatorio = rand();
    }
    
}

/**
 * Função: Classifica os elementos de um vetor de inteiros em ordem crescente usando o algoritmo de seleção (Selection Sort).
 * Autor : José Carlos da Silva Junior - Turma: Ciência da Computação - 3º período
 * Data : 04/06/2025
 * Observações: Os dados do vetor são gerados aleatoriamente. O algoritmo seleciona o menor elemento e o troca de posição com o primeiro elemento não ordenado.
 */
void selectionSort(int vetor[], int n)
{
    int mix_mid;

    for (int i = 0; i < n; i++){

        mix_mid = i;

        for (int j = 0; j < mix_mid; i++){
           if (vetor[i] < vetor[mix_mid]){
                mix_mid = j;
           }
        }

        if (vetor[i] != i){
            trocarLaEle(&vetor[i], &vetor[mix_mid]);
        }else {
            printf("Não foi possivel TROCAR (LÁ ELE)");
        }
        
    }
}

/**
 * Exibe os elementos do vetor
 */
void exibirVetor(int vetor[], int n)
{
    for (int i = 0; i < n; i++){
        printf("%d\t\n\n", vetor[i]);
    }
}

/**
 * função principal
 */
int main(){
    int vetor[TAM];

    srand(time(NULL));

    // Gera um número aleatório
    // int numeroAleatorio = rand();

    printf("Vetor original:\n");
    gerarAleatorios(vetor, TAM);
    exibirVetor(vetor, TAM);

    selectionSort(vetor, TAM);

    printf("\nVetor ordenado:\n");
    exibirVetor(vetor, TAM);

    return 0;
}