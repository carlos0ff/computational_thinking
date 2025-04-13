/*
**    Função : Sistema de Livros com Busca Recursiva
**    Autor : José carlos da Silva júnior - Turma F
**    Data  : 12/04/2025
**    Observações: Cadastra livros, busca por título recursivamente, imprime todos e libera memória.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

typedef struct {
    char titulo[MAX];
    char autor[MAX];
    int ano;
} Livro;

int buscar_recursivo(Livro *livros, int n, const char *busca, int index) {
    if (index >= n) return -1;
    if (strcmp(livros[index].titulo, busca) == 0) return index;

    return buscar_recursivo(livros, n, busca, index + 1);
}

void listar_livros(Livro *livros, int n) {
    for (int i = 0; i < n; i++) {
        printf("\nTitulo: %s\nAutor: %s\nAno: %d\n", livros[i].titulo, livros[i].autor, livros[i].ano);
    }
}

int main() {
    int n;
    printf("Digite o numero de livros: ");
    scanf("%d", &n);

    getchar();

    Livro *livros = (Livro *)malloc(n * sizeof(Livro));

    for (int i = 0; i < n; i++) {
        printf("\nLivro %d\nTitulo: ", i + 1);
        fgets(livros[i].titulo, MAX, stdin);
        livros[i].titulo[strcspn(livros[i].titulo, "\n")] = '\0';
        printf("Autor: ");
        fgets(livros[i].autor, MAX, stdin);
        livros[i].autor[strcspn(livros[i].autor, "\n")] = '\0';
        printf("Ano: ");
        scanf("%d", &livros[i].ano);
        getchar();
    }

    char busca[MAX];
    printf("\nDigite o titulo do livro para buscar: ");
    fgets(busca, MAX, stdin);
    busca[strcspn(busca, "\n")] = '\0';

    int pos = buscar_recursivo(livros, n, busca, 0);

    if (pos != -1)
        printf("\nLivro encontrado: %s por %s (%d)\n", livros[pos].titulo, livros[pos].autor, livros[pos].ano);
    else
        printf("\nLivro nao encontrado.\n");

    printf("\n-- Lista de Livros --\n");
    listar_livros(livros, n);

    free(livros);
    return 0;
}
