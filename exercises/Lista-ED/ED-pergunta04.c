/*
**    Função : Agenda de Contatos com Realloc e Ordenação
**    Autor : José carlos da Silva júnior - Turma F
**    Data  : 12/04/2025
**    Observações: Cadastro dinâmico de contatos com realloc e listagem recursiva.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

typedef struct {
    char nome[MAX];
    char telefone[MAX];
    int idade;
} Contato;

void listar_contatos(Contato *contatos, int n, int index) {
    if (index >= n) return;
    printf("\nNome: %s\nTelefone: %s\nIdade: %d\n", contatos[index].nome, contatos[index].telefone, contatos[index].idade);
    listar_contatos(contatos, n, index + 1);
}

int main() {
    int n;

    printf("Digite o numero inicial de contatos: ");
    scanf("%d", &n);
    getchar();

    Contato *contatos = (Contato *)malloc(n * sizeof(Contato));
    for (int i = 0; i < n; i++) {
        printf("\nContato %d\nNome: ", i + 1);
        fgets(contatos[i].nome, MAX, stdin);

        contatos[i].nome[strcspn(contatos[i].nome, "\n")] = '\0';

        printf("Telefone: ");
        fgets(contatos[i].telefone, MAX, stdin);
        contatos[i].telefone[strcspn(contatos[i].telefone, "\n")] = '\0';

        printf("Idade: ");
        scanf("%d", &contatos[i].idade);
        getchar();
    }

    int mais;

    printf("\nDeseja adicionar mais contatos? Quantos: ");
    scanf("%d", &mais);

    getchar();

    contatos = realloc(contatos, (n + mais) * sizeof(Contato));

    for (int i = n; i < n + mais; i++) {
        printf("\nContato %d\nNome: ", i + 1);
        fgets(contatos[i].nome, MAX, stdin);
        contatos[i].nome[strcspn(contatos[i].nome, "\n")] = '\0';
        printf("Telefone: ");
        fgets(contatos[i].telefone, MAX, stdin);
        contatos[i].telefone[strcspn(contatos[i].telefone, "\n")] = '\0';
        printf("Idade: ");
        scanf("%d", &contatos[i].idade);
        getchar();
    }
    n += mais;

    printf("\n-- Lista de Contatos --\n");
    listar_contatos(contatos, n, 0);

    free(contatos);
    return 0;
}
