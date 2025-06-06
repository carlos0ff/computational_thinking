/**
 * Suponha que uma empresa aérea mantém um cadastro de aeroportos como um vetor de
 * ponteiros para estruturas que contêm as seguintes informações:
 *   - a. Sigla: string com até 3 caracteres;
 *    - b.Cidade: string com até 50 caracteres;
 *   - c.Pais: string com até 30caracteres;
 *   - d.Taxa: um valor real;
 *   - e.Capacidade: um valor inteiro; 
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
  char sigla[3];
  char cidade[50];
  char pais[30];
  double taxa;
  int capacidade;
} Aeroporto;


/**
 * Função para ler os dados de um novo aeroporto
 */
Aeroporto *lerAeroporto()
{

}