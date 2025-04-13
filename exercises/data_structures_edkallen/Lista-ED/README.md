# 📚 Lista de Exercícios - Estruturas de Dados em C

Este repositório contém as soluções para os exercícios propostos na **Lista de Exercícios sobre Funções, Arrays, Structs, TADs, Recursividade e Alocação Dinâmica**, desenvolvidas na linguagem C.

## 📌 Instruções para Entrega

Este conjunto de exercícios visa revisar os principais conceitos trabalhados em aula:

- ✅ Funções
- ✅ Recursividade
- ✅ Arrays
- ✅ Structs
- ✅ TADs (Tipos Abstratos de Dados)
- ✅ Alocação Dinâmica de Memória

---

## ✅ O que você deve fazer

- Implemente as soluções em **linguagem C**.
- Use código **bem indentado**, **comentado** e com **mensagens claras para o usuário**.
- O programa deve **compilar corretamente** e executar todas as funcionalidades exigidas.
- **Libere toda a memória alocada** com `free`.
- Use `fgets()` para entrada de strings.
- Use `realloc()` para expandir vetores dinamicamente, se necessário.

---

## 📂 Formas de Entrega

Você pode entregar de **uma das duas formas**:

1. 📎 Upload de um **arquivo `.c`** com o código do programa.
2. 📝 Colar o código diretamente no campo de resposta da plataforma.

**Importante:** Entregue **um código para cada questão**, separado por arquivo se possível.

---

## 📅 Prazo Final

🕒 **Data limite para entrega: _13/04/2025_**

⚠️ Submissões **após essa data poderão ser penalizadas** conforme regras da disciplina.

---

## ⚠️ Observações Importantes

- Comentários no código são **fortemente recomendados** (e bem avaliados 😉).
- Trabalhos idênticos ou com **evidência de cópia serão zerados**.
- A saída dos programas deve ser **clara e formatada**.
- Teste todos os seus programas antes de enviar.

---

## 🧠 Exercícios

### 🔢 Pergunta 1 - Cadastro de Alunos com Expansão Dinâmica

- Armazena `N` alunos com `nome`, `idade` e `nota`.
- Usa `fgets` para nomes.
- Expande com `realloc`.
- Imprime recursivamente.
- Calcula a média das notas.
- Libera a memória ao final.

### 📚 Pergunta 2 - Sistema de Livros com Busca Recursiva

- Vetor de livros com `título`, `autor`, `ano`.
- Aloca com `malloc` e expande com `realloc`.
- Busca recursiva por título.
- Lista livros e libera memória.

### 🧮 Pergunta 3 - Matriz Dinâmica com Structs

- Aloca matriz `NxM` dinamicamente.
- Struct `InfoMatriz` com dados da matriz.
- Soma dos elementos com função.
- Liberação de memória com `free`.

### 📇 Pergunta 4 - Agenda de Contatos com Ordenação

- Cadastro de contatos com `nome`, `telefone` e `idade`.
- Permite expansão com `realloc`.
- Impressão recursiva dos contatos.
- Liberação completa da memória.

### 🛒 Pergunta 5 - Sistema de Produtos com Estoque Dinâmico

- Produtos com `nome`, `preço`, `quantidade`.
- Vetor dinâmico de `Produto`.
- Funções para:
  - Cadastrar produtos
  - Calcular valor total do estoque
  - Listar produtos com `qtd < 5` (recursivo)
- Memória liberada corretamente.

---

## 📁 Organização dos Arquivos

```plaintext
📂 Lista-ED
├── ED-pergunta01.c
├── ED-pergunta02.c
├── ED-pergunta03.c
├── ED-pergunta04.c
├── ED-pergunta05.c
└── README.md
