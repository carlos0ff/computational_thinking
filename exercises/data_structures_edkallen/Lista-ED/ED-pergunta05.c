
/*
**    Função : Sistema de Produtos com Estoque Dinâmico
**    Autor : José carlos da Silva júnior - Turma F
**    Data  : 12/04/2025
**    Observações: Usa realloc para cadastro de produtos, calcula estoque e lista com quantidade baixa.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

typedef struct {
    char nome[MAX];
    float preco;
    int quantidade;
} Produto;

float calcular_total_estoque(Produto *produtos, int n) {
    float total = 0;

    for (int i = 0; i < n; i++) {
        total += produtos[i].preco * produtos[i].quantidade;
    }

    return total;
}

void listar_baixo_estoque(Produto *produtos, int n, int index) {
    if (index >= n) return;

    if (produtos[index].quantidade < 5) {
        printf("\nProduto: %s\nPreco: %.2f\nQuantidade: %d\n",
               produtos[index].nome, produtos[index].preco, produtos[index].quantidade);
    }

    listar_baixo_estoque(produtos, n, index + 1);
}

int main() {
    int n;

    printf("Digite o numero de produtos: ");
    scanf("%d", &n);

    getchar();

    Produto *produtos = (Produto *)malloc(n * sizeof(Produto));

    for (int i = 0; i < n; i++) {
        printf("\nProduto %d\nNome: ", i + 1);

        fgets(produtos[i].nome, MAX, stdin);

        produtos[i].nome[strcspn(produtos[i].nome, "\n")] = '\0';

        printf("Preco: ");
        scanf("%f", &produtos[i].preco);

        printf("Quantidade: ");
        scanf("%d", &produtos[i].quantidade);

        getchar();
    }

    int mais;

    printf("\nDeseja adicionar mais produtos? Quantos: ");
    scanf("%d", &mais);

    getchar();

    produtos = realloc(produtos, (n + mais) * sizeof(Produto));

    for (int i = n; i < n + mais; i++) {
        printf("\nProduto %d\nNome: ", i + 1);
        fgets(produtos[i].nome, MAX, stdin);
        produtos[i].nome[strcspn(produtos[i].nome, "\n")] = '\0';
        printf("Preco: ");
        scanf("%f", &produtos[i].preco);
        printf("Quantidade: ");
        scanf("%d", &produtos[i].quantidade);
        getchar();
    }
    n += mais;

    printf("\nValor total do estoque: R$ %.2f\n", calcular_total_estoque(produtos, n));

    printf("\nProdutos com estoque abaixo de 5 unidades:\n");
    listar_baixo_estoque(produtos, n, 0);

    free(produtos);
    return 0;
}
