/*
**    Função : Calcula a potência fatorial crescente e decrescente de um número
**    Autor : Seu Nome - Turma X
**    Data  : 12/04/2025
**    Observações: Exibe tabelas para diferentes valores de x e n. Salva os resultados em um arquivo texto.
*/

#include <stdio.h>
#include <stdlib.h>

long long potencia_fatorial_crescente(int x, int n) 
{
    long long resultado = 1;

    for (int i = 0; i < n; i++) {
        resultado *= (x + i);
    }

    return resultado;
}

long long potencia_fatorial_decrescente(int x, int n) 
{
    long long resultado = 1;

    for (int i = 0; i < n; i++) {
        resultado *= (x - i);
    }

    return resultado;
}

void gerar_tabelas() 
{
    FILE *arquivo = fopen("resultado_potencias.txt", "w");

    int x, n;

    printf("Tabela com x = 5 e n variando de 1 a 5:\n");
    fprintf(arquivo, "Tabela com x = 5 e n variando de 1 a 5:\n");

    for (n = 1; n <= 5; n++) {
        long long cres = potencia_fatorial_crescente(5, n);
        long long decres = potencia_fatorial_decrescente(5, n);

        printf("n = %d | Crescente: %lld | Decrescente: %lld\n", n, cres, decres);
        fprintf(arquivo, "n = %d | Crescente: %lld | Decrescente: %lld\n", n, cres, decres);
    }

    printf("\nTabela com n = 3 e x variando de 1 a 5:\n");
    fprintf(arquivo, "\nTabela com n = 3 e x variando de 1 a 5:\n");

    for (x = 1; x <= 5; x++) {
        long long cres = potencia_fatorial_crescente(x, 3);
        long long decres = potencia_fatorial_decrescente(x, 3);

        printf("x = %d | Crescente: %lld | Decrescente: %lld\n", x, cres, decres);
        fprintf(arquivo, "x = %d | Crescente: %lld | Decrescente: %lld\n", x, cres, decres);
    }

    fclose(arquivo);
    printf("\nResultados salvos em 'resultado_potencias.txt'\n");
}

int main() {
    gerar_tabelas();
    return 0;
}
