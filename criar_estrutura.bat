@echo off
setlocal EnableDelayedExpansion

:: Nome do diretório raiz do projeto
set "ROOT=estrutura_dados_c"
echo Criando projeto: %ROOT%
mkdir %ROOT%
cd %ROOT%

:: Arquivos principais do repositório
echo Criando arquivos iniciais...
(
  echo # Makefile para compilar todos os módulos
) > Makefile

(
  echo # CMakeLists.txt para uso com CMake
) > CMakeLists.txt

(
  echo # Estrutura de Dados em C
  echo.
  echo Repositório com teoria, implementações, exercícios e testes.
  echo Cada tópico tem exemplos práticos organizados por diretórios.
) > LEIA-ME.md

:: ===== Criar estrutura para cada módulo =====

call :criar_topico 00_fundamentos teoria exemplos exercicios testes arquivos
call :criar_topico 01_vetores_matrizes teoria implementacoes include exercicios desafios testes arquivos
call :criar_topico 02_listas_encadeadas teoria implementacoes include exercicios desafios testes
call :criar_topico 03_pilhas teoria implementacoes include exercicios desafios testes
call :criar_topico 04_filas teoria implementacoes include exercicios desafios testes
call :criar_topico 05_arvores teoria implementacoes include exercicios desafios testes
call :criar_topico 06_grafos teoria implementacoes include exercicios desafios testes
call :criar_topico 07_tabelas_hash teoria implementacoes include exercicios desafios testes
call :criar_topico 08_topicos_avancados teoria implementacoes include exercicios desafios testes

:: Algoritmos básicos separadamente
call :criar_algoritmos_basicos

:: Projetos finais
echo Criando projetos finais...
mkdir projetos_finais
cd projetos_finais
echo // Simulador de Memória Virtual > simulador_memoria_virtual.c
echo // Gerenciador de Tarefas (Pilha e Fila) > gerenciador_tarefas_pilha_fila.c
echo // Sistema de Árvore de Usuários > sistema_arvore_usuarios.c
echo // Rede Social com Grafo > rede_social_com_grafo.c
echo // Compressão de Texto com Trie > compressao_texto_trie.c
echo // Sistema Bancário com Hash > sistema_banco_hash.c
cd ..

echo Projeto criado com sucesso!
pause
exit /b

:: =====================
:: Função para criar módulos
:criar_topico
set "TOPICO=%1"
shift
mkdir %TOPICO%
cd %TOPICO%

:loop
if "%~1"=="" goto sair_topico
mkdir %1

if "%1"=="teoria" (
  echo // Teoria do tópico %TOPICO% > %1/teoria_%TOPICO%.c
)
if "%1"=="implementacoes" (
  echo // Implementação principal do tópico %TOPICO% > %1/%TOPICO%_main.c
)
if "%1"=="include" (
  echo // Header do módulo %TOPICO% > %1/%TOPICO%_main.h
)
if "%1"=="exercicios" (
  echo // Exercício do tópico %TOPICO% > %1/exercicio_%TOPICO%.c
)
if "%1"=="desafios" (
  echo // Desafio do tópico %TOPICO% > %1/desafio_%TOPICO%.c
)
if "%1"=="testes" (
  echo // Testes do tópico %TOPICO% > %1/test_%TOPICO%.c
)
if "%1"=="arquivos" (
  echo // Leitura e escrita em arquivos no tópico %TOPICO% > %1/arquivos_%TOPICO%.c
)

shift
goto loop

:sair_topico
cd ..
exit /b

:: =====================
:: Estrutura especial para algoritmos
:criar_algoritmos_basicos
set "TOPICO=09_algoritmos_basicos"
mkdir %TOPICO%
cd %TOPICO%

:: Subpastas principais
for %%d in (ordenacao busca recursao dinamica gulosos divisao_conquista matematicos extras testes) do (
  mkdir %%d
)

:: Ordenação
echo // Bubble Sort > ordenacao/bubble_sort.c
echo // Merge Sort > ordenacao/merge_sort.c
echo // Quick Sort > ordenacao/quick_sort.c

:: Busca
echo // Busca Binária > busca/busca_binaria.c

:: Recursão
echo // Fatorial Recursivo > recursao/fatorial_recursivo.c
echo // Fibonacci Recursivo > recursao/fibonacci_recursivo.c

:: Programação Dinâmica
echo // Mochila 0-1 (PD) > dinamica/mochila_0_1.c

:: Gulosos
echo // Mochila Fracionária > gulosos/mochila_fracionaria.c

:: Divisão e Conquista
echo // Máximo e Mínimo em array > divisao_conquista/max_min.c

:: Matemáticos
echo // Crivo de Eratóstenes > matematicos/crivo_eratostenes.c

:: Extras
echo // Algoritmo de Karatsuba > extras/karatsuba.c

:: Testes
echo // Testes de algoritmos > testes/test_algoritmos_basicos.c

cd ..
exit /b
