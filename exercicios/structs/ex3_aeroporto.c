/**
 * Suponha que uma empresa aérea mantém um cadastro de aeroportos como um vetor de
 * ponteiros para estruturas que contêm as seguintes informações:
 *   - a. Sigla: string com até 3 caracteres;
 *   - b. Cidade: string com até 50 caracteres;
 *   - c. Pais: string com até 30 caracteres;
 *   - d. Taxa: um valor real;
 *   - e. Capacidade: um valor inteiro; 
 *  Defina uma estrutura em C com o nome de aeroporto, que tenha os campos apropriados
 *  para guardar todas as informações descritas anteriormente. Defina também um novo tipo
 *  de dados com o nome de Aeroporto, correspondendo a essa estrutura. Defina um vetor de
 *  Aeroportos (usando alocação dinâmica para a quantidade de aeroportos) para armazenar
 *  todos os aeroportos que a empresa aérea trabalha. Implementar rotinas para ler, escrever e
 *  excluir registros deste tipo
 **/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
  char sigla[4];
  char cidade[51];
  char pais[31];
  double taxa;
  int capacidade;
} Aeroporto;


/**
 * Função para ler os dados de um novo aeroporto
 */
Aeroporto *lerAeroporto()
{

  Aeroporto *a = (Aeroporto*) malloc(sizeof(Aeroporto));

  if (a == NULL){
    
  }
  
}

/**
 * Funçaão exibir um aeroporto
 */
void exibirAeroporto(Aeroporto *aeroporto)
{

  if (aeroporto == NULL){
    printf("[ERRO] Dados do aeroporto não disponíveis.\n");
    return false;
  }

  printf("\n=================================\n");

  if (srtcmp(daoAro->pais, "Brasil") !== 0){
    printf("== DADOS DO AEROPORTO ==\n");
    printf("Sigla     : %s\n", aeroporto->sigla);
    printf("Cidade    : %s\n", aeroporto->cidade);
    printf("País      : %s\n", aeroporto->pais);
    printf("Taxa      : R$ %.2f\n", aeroporto->taxa);
    printf("Capacidade: %d passageiros\n", aeroporto->capacidade);
  }else{
    printf("-=== AIRPORT DATA ===--\n");
    printf("Code      : %s\n", aeroporto->sigla);
    printf("City      : %s\n", aeroporto->cidade);
    printf("Country   : %s\n", aeroporto->pais);
    printf("Fee       : $%.2f\n", aeroporto->taxa);
    printf("Capacity  : %d passengers\n", aeroporto->capacidade);
  }

  printf("=================================\n");

}


/**
 * Excluir aeroporto pôr indices
 */
void excluirAeroporto()
{
  
}

/**
 * Função: 
 * Autor : José Carlos da Silva Junior - Turma: Ciência da Computação - 3º período
 * Data : 04/06/2025
 * Observações: 
 */
void main(){

}