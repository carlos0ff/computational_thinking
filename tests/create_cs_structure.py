import os
import random
from datetime import datetime
from typing import Dict, List

# Estrutura completa de pastas e algoritmos
ESTRUTURA = {
    "01_Algoritmos": {
        "01_Ordenacao": {
            "Comparacao": ["bubble_sort", "selection_sort", "insertion_sort", "shell_sort"],
            "DivisaoConquista": ["merge_sort", "quick_sort", "heap_sort"],
            "NaoComparacao": ["counting_sort", "radix_sort", "bucket_sort"]
        },
        "02_Busca": {
            "Sequencial": ["linear_search", "sentinel_search"],
            "Intervalo": ["binary_search", "ternary_search", "fibonacci_search"],
            "Hash": ["hash_table", "cuckoo_hashing", "bloom_filter"]
        },
        "03_Grafos": {
            "Caminhos": ["dijkstra", "bellman_ford", "floyd_warshall"],
            "Arvores": ["prim", "kruskal", "boruvka"],
            "Topologia": ["topological_sort", "strongly_connected_components"]
        }
    },
    "02_Estruturas": {
        "01_Lineares": {
            "Estaticas": ["array", "matrix", "circular_buffer"],
            "Dinamicas": ["linked_list", "doubly_linked", "skip_list"],
            "Restritas": ["stack", "queue", "deque", "priority_queue"]
        },
        "02_Arvores": {
            "Binarias": ["binary_tree", "bst", "avl", "red_black"],
            "Balanceadas": ["b_tree", "b+_tree", "2-3_tree"],
            "Especiais": ["trie", "suffix_tree", "segment_tree"]
        },
        "03_Grafos": {
            "Representacao": ["adjacency_matrix", "adjacency_list", "incidence_matrix"],
            "Operacoes": ["connectivity", "shortest_path", "max_flow"]
        }
    },
    "03_Exercicios": {
        "01_LeetCode": {
            "Facil": ["two_sum", "palindrome_number", "roman_to_int"],
            "Medio": ["add_two_numbers", "longest_substring", "zigzag_conversion"],
            "Dificil": ["regular_expression", "median_arrays", "merge_k_lists"]
        },
        "02_CodeForces": {
            "800": ["watermelon", "way_too_long", "team"],
            "1200": ["bit++", "beautiful_matrix", "petya_strings"]
        }
    }
}

# Template avançado com mais detalhes
TEMPLATE = """#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * {nome} - Implementação {versao}
 * Criado em: {data}
 * Autor: {autor}
 * Complexidade: {complexidade}
 */

void {funcao}() {{
    printf("{nome} - Versão {versao}\\n");
    printf("Tipo: {tipo}\\n");
    printf("Características:\\n");
    printf("- {caracteristica1}\\n");
    printf("- {caracteristica2}\\n");
    printf("- {caracteristica3}\\n\\n");
    
    srand(time(NULL));
    int tamanho_teste = {tamanho_teste};
    printf("Testando com %d elementos...\\n", tamanho_teste);
}}

int main() {{
    {funcao}();
    return 0;
}}
"""

# Dados para geração aleatória
AUTORES = ["Alan Turing", "Donald Knuth", "Edsger Dijkstra", "John von Neumann", "Ada Lovelace"]
COMPLEXIDADES = ["O(1)", "O(log n)", "O(n)", "O(n log n)", "O(n²)", "O(n³)", "O(2^n)"]
CARACTERISTICAS = [
    "Otimizado para cache",
    "Uso mínimo de memória",
    "Implementação paralela",
    "Versão recursiva",
    "Versão iterativa",
    "Com validação de entrada",
    "Com medidas de tempo",
    "Alocação dinâmica eficiente"
]
TIPOS_ALGORITMO = {
    "Ordenacao": "Algoritmo de ordenação",
    "Busca": "Algoritmo de busca",
    "Grafos": "Algoritmo para grafos",
    "Lineares": "Estrutura linear",
    "Arvores": "Estrutura de árvore",
    "Grafos": "Estrutura de grafo"
}

def gerar_conteudo(nome: str, versao: int, categoria: str) -> str:
    """Gera conteúdo único para cada arquivo"""
    tipo = next((v for k, v in TIPOS_ALGORITMO.items() if k in categoria), "Implementação")
    
    return TEMPLATE.format(
        nome=nome.replace('_', ' ').title(),
        versao=versao,
        data=datetime.now().strftime("%d/%m/%Y %H:%M"),
        autor=random.choice(AUTORES),
        complexidade=random.choice(COMPLEXIDADES),
        funcao=f"{nome}_v{versao}",
        tipo=tipo,
        caracteristica1=random.choice(CARACTERISTICAS),
        caracteristica2=random.choice(CARACTERISTICAS),
        caracteristica3=random.choice(CARACTERISTICAS),
        tamanho_teste=random.choice([100, 1000, 10000, 100000])
    )

def criar_estrutura():
    total_arquivos = 0
    
    for pasta_principal, categorias in ESTRUTURA.items():
        os.makedirs(pasta_principal, exist_ok=True)
        print(f"\n📌 {pasta_principal}")
        
        for subpasta, subcategorias in categorias.items():
            caminho_subpasta = os.path.join(pasta_principal, subpasta)
            os.makedirs(caminho_subpasta, exist_ok=True)
            print(f"  ├─📂 {subpasta}")
            
            for subsubpasta, itens in subcategorias.items():
                caminho_subsubpasta = os.path.join(caminho_subpasta, subsubpasta)
                os.makedirs(caminho_subsubpasta, exist_ok=True)
                print(f"  │  ├─📁 {subsubpasta}")
                
                for item in itens:
                    # Cria 10 versões de cada implementação
                    for versao in range(1, 11):
                        nome_arquivo = f"{item}_v{versao}.c"
                        caminho_completo = os.path.join(caminho_subsubpasta, nome_arquivo)
                        
                        conteudo = gerar_conteudo(item, versao, subsubpasta)
                        
                        with open(caminho_completo, 'w', encoding='utf-8') as f:
                            f.write(conteudo)
                        total_arquivos += 1
                    print(f"  │  │  ├─📝 10 versões de {item}")
    
    print(f"\n✅ Estrutura criada com sucesso!")
    print(f"📂 Total de pastas: {sum(len(v) for v in ESTRUTURA.values())}")
    print(f"📝 Total de arquivos: {total_arquivos}")
    print(f"📊 Tamanho estimado: ~{total_arquivos * 2 / 1024:.2f} MB")
    print(f"🕒 Hora da criação: {datetime.now().strftime('%d/%m/%Y %H:%M')}")

if __name__ == "__main__":
    print("🚀 Gerando estrutura MEGA de estudo com 10+ versões por algoritmo...")
    criar_estrutura()