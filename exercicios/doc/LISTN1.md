# Lista 1 – Estruturas de Dados em C

Esta lista contém 9 exercícios com foco em estruturas de dados, algoritmos de ordenação, TADs e manipulação de registros em C.

---

## Exercícios

### 1. Ordenação por Seleção
Implemente uma função para ordenar um vetor em ordem crescente utilizando o algoritmo *Selection Sort*. O algoritmo funciona da seguinte forma:
- Encontre o menor elemento do vetor e troque com o primeiro;
- Repita o processo para o subvetor restante;
- Continue até que reste apenas um elemento.

Teste a função com dados gerados aleatoriamente.

### 2. Registro de Empregados
- Crie uma `struct Empregado` com: nome, data de nascimento, RG, data de admissão e salário;
- Crie um vetor dinâmico de empregados;
- Implemente funções para **ler**, **escrever** e **excluir** registros.

### 3. Cadastro de Aeroportos
- Crie uma `struct Aeroporto` com os campos:
  - `sigla[4]`
  - `cidade[51]`
  - `pais[31]`
  - `taxa (float)`
  - `capacidade (int)`
- Crie um vetor dinâmico de ponteiros para `Aeroporto`;
- Implemente rotinas para **inserir**, **listar** e **remover** aeroportos.

### 4. Conjectura de Goldbach
- Implemente um programa que verifica a *Conjectura de Goldbach* para todos os números pares entre 700 e 1100;
- Para cada número, exiba os dois primos cuja soma seja igual ao número.

### 5. Goldbach com Limite Definido
- Refaça o exercício anterior solicitando um número `N` do usuário e testando todos os números pares de 2 até `N`.

### 6. Método de Newton-Raphson para Raiz Quadrada
- Implemente a aproximação da raiz quadrada de um número `n` utilizando o método de Newton-Raphson;
- O algoritmo deve parar quando a diferença entre aproximações consecutivas for menor que 0.0001.

### 7. Quicksort Recursivo
- Implemente uma função de ordenação usando o algoritmo *Quicksort*;
- Faça a ordenação recursivamente, conforme a estratégia tradicional;
- Teste a função com dados aleatórios.

### 8. TAD para Números Complexos
- Crie um TAD chamado `Complexo` com `double real` e `double imaginario`;
- Implemente funções para:
  - Criar e destruir um número complexo;
  - Ler um número complexo;
  - Somar, subtrair, multiplicar e dividir dois números complexos;
  - Exibir na forma `(a,b)`.

### 9. BubbleSort com Contagem
- Implemente a ordenação *BubbleSort* para um vetor (inteiros ou reais);
- Conte o número de comparações (`if`) e o número de trocas realizadas;
- Exiba essas estatísticas após ordenar.

---

## Estrutura do Projeto

```text
exercicios/
├── exercicio1_selection_sort.c
├── exercicio2_empregados.c
├── exercicio3_aeroportos.c
├── exercicio4_goldbach.c
├── exercicio5_goldbach_limit.c
├── exercicio6_newton.c
├── exercicio7_quicksort.c
├── exercicio8_complexo.c
├── exercicio9_bubblesort.c
└── README.md
