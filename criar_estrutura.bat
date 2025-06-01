@echo off
:: Definindo o diretório raiz
set "ROOT=estrutura_dados_cpp"

:: Criando as pastas principais
echo Criando estrutura de diretórios...
mkdir %ROOT%
cd %ROOT%

:: Criando o diretório raiz para o Makefile e CMakeLists
echo Criando Makefile e CMakeLists.txt...
echo # Makefile para o projeto > Makefile
echo # CMakeLists.txt para o projeto > CMakeLists.txt

:: Criando o LEIA-ME.md
echo Criando LEIA-ME.md...
echo # Estrutura de Dados em C++ > LEIA-ME.md
echo. >> LEIA-ME.md
echo Este repositório contém implementações dos principais algoritmos e estruturas de dados. >> LEIA-ME.md
echo Cada diretório representa um tópico com teoria, exemplos, desafios, exercícios e testes. >> LEIA-ME.md

:: Criando a estrutura de pastas por tópicos
mkdir 00_fundamentos
mkdir 01_vetores_matrizes
mkdir 02_listas_encadeadas
mkdir 03_pilhas
mkdir 04_filas
mkdir 05_arvores
mkdir 06_grafos
mkdir 07_tabelas_hash
mkdir 08_topicos_avancados
mkdir 09_algoritmos_basicos
mkdir projetos_finais

:: Criando as pastas e arquivos para 00_fundamentos
cd 00_fundamentos
mkdir teoria exemplos exercicios testes arquivos
echo // Teoria sobre fundamentos de C++ > teoria/fundamentos_teoria.cpp
echo // Exemplo de código básico > exemplos/hello_world.cpp
echo // Exercício sobre manipulação de arquivos > exercicios/exercicio_arquivo.cpp
echo // Teste do cálculo de fatorial > testes/test_fatorial.cpp
echo // Código para ler e escrever arquivo em C++ > arquivos/ler_escrever_arquivo_txt.cpp
cd ..

:: Criando as pastas e arquivos para 01_vetores_matrizes
cd 01_vetores_matrizes
mkdir teoria implementacoes exercicios desafios testes arquivos
echo // Teoria sobre vetores e matrizes > teoria/vetores_matrizes_teoria.cpp
echo // Implementação de matriz estática > implementacoes/matriz_estatica.cpp
echo // Exercício de manipulação de matrizes > exercicios/exercicio_matriz.cpp
echo // Desafio de rotação de array > desafios/rotacao_array.cpp
echo // Desafio do jogo da vida > desafios/jogo_da_vida.cpp
echo // Teste de matriz estática > testes/test_matriz_estatica.cpp
echo // Código para ler matriz de arquivo > arquivos/ler_matriz_de_arquivo.cpp
cd ..

:: Criando as pastas e arquivos para 02_listas_encadeadas
cd 02_listas_encadeadas
mkdir teoria implementacoes exercicios desafios testes
echo // Teoria sobre listas encadeadas > teoria/listas_encadeadas_teoria.cpp
echo // Implementação de lista simples > implementacoes/lista_simples.cpp
echo // Exercício sobre listas encadeadas > exercicios/exercicio_lista.cpp
echo // Desafio de lista de polinômio > desafios/lista_polinomio.cpp
echo // Teste de lista encadeada > testes/test_lista.cpp
cd ..

:: Criando as pastas e arquivos para 03_pilhas
cd 03_pilhas
mkdir teoria implementacoes exercicios desafios testes
echo // Teoria sobre pilhas > teoria/pilhas_teoria.cpp
echo // Implementação de pilha com array > implementacoes/pilha_array.cpp
echo // Exercício sobre pilhas > exercicios/exercicio_pilha.cpp
echo // Desafio de palíndromos com pilha > desafios/pilha_palindromos.cpp
echo // Teste de pilha > testes/test_pilha.cpp
cd ..

:: Criando as pastas e arquivos para 04_filas
cd 04_filas
mkdir teoria implementacoes exercicios desafios testes
echo // Teoria sobre filas > teoria/filas_teoria.cpp
echo // Implementação de fila com array > implementacoes/fila_array.cpp
echo // Exercício sobre filas > exercicios/exercicio_fila.cpp
echo // Desafio de impressora simulada > desafios/impressora_simulador.cpp
echo // Desafio de fila de prioridade > desafios/fila_prioridade_simulada.cpp
echo // Teste de fila > testes/test_fila.cpp
cd ..

:: Criando as pastas e arquivos para 05_arvores
cd 05_arvores
mkdir teoria implementacoes exercicios desafios testes
echo // Teoria sobre árvores binárias > teoria/arvores_binarias_teoria.cpp
echo // Implementação de árvore binária de busca > implementacoes/arvore_binaria_busca.cpp
echo // Exercício sobre árvores > exercicios/exercicio_arvore.cpp
echo // Desafio de reconstrução de árvore > desafios/reconstruir_arvore.cpp
echo // Desafio de árvore de diretórios > desafios/arvore_diretorios.cpp
echo // Teste de árvore binária de busca > testes/test_bst.cpp
cd ..

:: Criando as pastas e arquivos para 06_grafos
cd 06_grafos
mkdir teoria implementacoes exercicios desafios testes
echo // Teoria sobre grafos > teoria/grafos_teoria.cpp
echo // Implementação de grafo com lista de adjacência > implementacoes/grafo_lista_adjacencia.cpp
echo // Exercício sobre grafos > exercicios/exercicio_grafo.cpp
echo // Desafio de resolver Sudoku com grafos > desafios/sudoku_resolver_com_grafo.cpp
echo // Desafio de caminho ótimo para entregas > desafios/caminho_otimo_entregas.cpp
echo // Teste de Dijkstra > testes/test_dijkstra.cpp
cd ..

:: Criando as pastas e arquivos para 07_tabelas_hash
cd 07_tabelas_hash
mkdir teoria implementacoes exercicios desafios testes
echo // Teoria sobre tabelas de hash > teoria/tabelas_hash_teoria.cpp
echo // Implementação de tabela de hash com encadeamento > implementacoes/tabela_hash_encadeamento.cpp
echo // Exercício sobre tabelas de hash > exercicios/exercicio_hash.cpp
echo // Desafio de detector de anagramas > desafios/detector_anagramas.cpp
echo // Desafio de indexador de arquivos > desafios/indexador_arquivos.cpp
echo // Teste de tabela hash > testes/test_hashmap.cpp
cd ..

:: Criando as pastas e arquivos para 08_topicos_avancados
cd 08_topicos_avancados
mkdir teoria implementacoes exercicios desafios testes
echo // Teoria sobre tópicos avançados > teoria/topicos_avancados_teoria.cpp
echo // Implementação de Trie > implementacoes/trie.cpp
echo // Exercício sobre tópicos avançados > exercicios/exercicio_trie.cpp
echo // Desafio de compressão com Trie > desafios/compressao_prefixos_trie.cpp
echo // Desafio de união-find para clusters > desafios/uf_clusters.cpp
echo // Teste de Trie > testes/test_trie.cpp
cd ..

:: Criando as pastas e arquivos para 09_algoritmos_basicos
cd 09_algoritmos_basicos
mkdir ordenacao busca recursao dinamica gulosos divisao_conquista matematicos extras testes
echo // Bubble Sort > ordenacao/bubble_sort.cpp
echo // Merge Sort > ordenacao/merge_sort.cpp
echo // Quick Sort > ordenacao/quick_sort.cpp
echo // Busca Binária > busca/busca_binaria.cpp
echo // Fatorial Recursivo > recursao/fatorial_recursivo.cpp
echo // Fibonacci Recursivo > recursao/fibonacci_recursivo.cpp
echo // Mochila 0-1 (Dinamica) > dinamica/mochila_0_1.cpp
echo // Problema da Mochila Fracionária > gulosos/problema_mochila_fracionaria.cpp
echo // Máximo e Mínimo de um Array > divisao_conquista/max_min_array.cpp
echo // Crivo de Eratóstenes > matematicos/crivo_eratostenes.cpp
echo // Algoritmo Karatsuba > extras/algoritmo_karatsuba.cpp
echo // Teste de algoritmos básicos > testes/test_algoritmos.cpp
cd ..

:: Criando as pastas e arquivos para projetos_finais
cd projetos_finais
echo // Simulador de Memória Virtual > simulador_memoria_virtual.cpp
echo // Gerenciador de Tarefas (Pilha e Fila) > gerenciador_tarefas_pilha_fila.cpp
echo // Sistema de Árvore de Usuários > sistema_arvore_usuarios.cpp
echo // Rede Social com Grafo > rede_social_com_grafo.cpp
echo // Compressão de Texto com Trie > compressao_texto_trie.cpp
echo // Sistema Bancário com Hash > sistema_banco_hash.cpp
cd ..

:: Mensagem de sucesso
echo Estrutura de diretórios e arquivos criada com sucesso!
pause