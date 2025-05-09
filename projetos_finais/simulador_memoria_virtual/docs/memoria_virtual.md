# Simulador de Memória Virtual

Este projeto implementa um simulador de gerenciamento de memória virtual, focando nos algoritmos de substituição de páginas: **FIFO (First-In First-Out)** e **LRU (Least Recently Used)**.

---

## 🧠 Conceitos Fundamentais

### O que é Memória Virtual?

A memória virtual é uma técnica usada pelos sistemas operacionais para dar a impressão de uma grande memória principal, utilizando tanto a RAM quanto o disco (swap). Essa técnica divide a memória em **páginas** e mapeia páginas virtuais para páginas físicas.

---

## 📚 Estrutura do Projeto




---

## ⚙️ Algoritmos de Substituição

### FIFO (First-In, First-Out)
- Substitui a página mais antiga carregada na memória.
- Fácil de implementar.
- Pode causar anomalia de Belady.

### LRU (Least Recently Used)
- Substitui a página que não é usada há mais tempo.
- Mais eficiente na maioria dos casos.
- Requer rastreamento da ordem de uso das páginas.

---

## 🔢 Exemplo de Simulação

### Entrada:
- Número de quadros: 3  
- Referências de páginas: `7, 0, 1, 2, 0, 3, 0, 4`

### Saída esperada:

| Algoritmo | Faltas de Página |
|-----------|------------------|
| FIFO      | 6                |
| LRU       | 5                |

---

## 🛠️ Tecnologias Utilizadas

- Linguagem: C++
- Paradigmas: Procedural e Orientado a Objetos
- Compilação: g++
- Testes: Arquivo `test_paginacao.cpp`

---

## ✅ Funcionalidades

- Leitura de sequência de referências de páginas
- Configuração de número de quadros
- Execução dos algoritmos FIFO e LRU
- Exibição de faltas de página
- Comparação de desempenho

---

## 🚀 Possíveis Extensões

- Implementação de LFU (Least Frequently Used)
- Interface gráfica com SDL, ImGui ou ncurses
- Leitura de entradas via arquivos `.txt`
- Exportação de resultados para `.csv`

---

## 👨‍💻 Autor

- Nome: [Seu Nome Aqui]
- Projeto: Simulador de Memória Virtual
- Curso: Ciência da Computação
