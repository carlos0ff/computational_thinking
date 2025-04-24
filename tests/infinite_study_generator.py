python
import os
from datetime import datetime

# Estrutura para Exercícios em C
ESTRUTURA_C = {
    "03_Exercicios_C": {
        "01_LeetCode": {
            "enunciados": {
                "easy": ["two_sum", "reverse_integer", "palindrome_number"],
                "medium": ["add_two_numbers", "longest_substring", "zigzag_conversion"],
                "hard": ["regular_expression", "median_arrays", "merge_k_lists"]
            },
            "solucoes": {
                "implementacoes": {},
                "testes": {}
            },
            "materiais": {
                "pdf": {},
                "casos_teste": {}
            }
        },
        "02_CodeForces": {
            "enunciados": {
                "800": ["watermelon", "way_too_long", "team"],
                "1200": ["bit++", "beautiful_matrix", "petya_strings"]
            },
            "solucoes": {
                "implementacoes": {},
                "testes": {}
            },
            "materiais": {
                "pdf": {},
                "casos_teste": {}
            }
        },
        "03_URI": {
            "enunciados": {
                "iniciante": ["1001", "1002", "1003"],
                "ad_hoc": ["1024", "1087", "1162"]
            },
            "solucoes": {
                "implementacoes": {},
                "testes": {}
            },
            "materiais": {
                "pdf": {},
                "casos_teste": {}
            }
        }
    }
}

# Template para enunciados em Markdown
TEMPLATE_ENUNCIADO = """# {titulo} (C)

**Data:** {data}  
**Dificuldade:** {dificuldade}

## Descrição
{descricao}

## Entrada
```c
{entrada}
Saída Esperada
c
{saida}
Exemplo
c
// Entrada
{exemplo_input}
c
// Saída
{exemplo_output}
"""

Template para soluções em C
TEMPLATE_SOLUCAO_C = """/*

Solução para {titulo} em C

Data: {data}

Autor: {autor}

Complexidade: {complexidade}
*/

#include <stdio.h>
#include <stdlib.h>

{prototipos}

int main() {{
{codigo_main}
return 0;
}}

{implementacoes}
"""

def criar_arquivo_c(nome_arquivo, conteudo):

    """Cria um arquivo com tratamento de erros"""
    try:
        with open(nome_arquivo, 'w', encoding='utf-8') as f:
            f.write(conteudo)
        return True
    except Exception as e:
        print(f"Erro ao criar {nome_arquivo}: {str(e)}")
    return False

def gerar_solucao_c(problema, dificuldade):
    """Gera uma solução em C para um problema"""
        prototipos = ""
        codigo_main = ""
        implementacoes = ""

if "two_sum" in problema:
    prototipos = "int* twoSum(int* nums, int numsSize, int target, int* returnSize);"
    codigo_main = """int nums[] = {2, 7, 11, 15};
int target = 9;
int returnSize;
int* result = twoSum(nums, 4, target, &returnSize);

printf("Indices: [%d, %d]\\n", result[0], result[1]);
free(result);"""
    implementacoes = """int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
int* result = (int*)malloc(2 * sizeof(int));
*returnSize = 2;

for (int i = 0; i < numsSize; i++) {
    for (int j = i + 1; j < numsSize; j++) {
        if (nums[i] + nums[j] == target) {
            result[0] = i;
            result[1] = j;
            return result;
        }
    }
}
return result;
}"""
else:
codigo_main = f'printf("Solução para {problema}\n");'

return TEMPLATE_SOLUCAO_C.format(
    titulo=problema.replace('_', ' ').title(),
    data=datetime.now().strftime("%d/%m/%Y"),
    autor="Seu Nome",
    complexidade="O(1)" if dificuldade == "easy" else "O(n)" if dificuldade == "medium" else "O(n²)",
    prototipos=prototipos,
    codigo_main=codigo_main,
    implementacoes=implementacoes
)
def criar_estrutura_c():
print("🚀 Criando estrutura de exercícios em C...\n")

for categoria_principal, subcategorias in ESTRUTURA_C.items():
    # Cria pasta principal
    os.makedirs(categoria_principal, exist_ok=True)
    print(f"📌 {categoria_principal}")
    
    for plataforma, conteudos in subcategorias.items():
        # Cria pasta da plataforma
        caminho_plataforma = os.path.join(categoria_principal, plataforma)
        os.makedirs(caminho_plataforma, exist_ok=True)
        print(f"  ├─📂 {plataforma}")
        
        # Cria subpastas (enunciados, soluções, materiais)
        for tipo_conteudo, itens in conteudos.items():
            caminho_tipo = os.path.join(caminho_plataforma, tipo_conteudo)
            os.makedirs(caminho_tipo, exist_ok=True)
            print(f"  │  ├─📁 {tipo_conteudo}")
            
            if tipo_conteudo == "enunciados":
                # Cria pastas de dificuldade/nível
                for nivel, problemas in itens.items():
                    caminho_nivel = os.path.join(caminho_tipo, nivel)
                    os.makedirs(caminho_nivel, exist_ok=True)
                    print(f"  │  │  ├─📂 {nivel}")
                    
                    # Cria arquivos de enunciado para cada problema
                    for problema in problemas:
                        caminho_problema = os.path.join(caminho_nivel, f"{problema}.md")
                        conteudo = TEMPLATE_ENUNCIADO.format(
                            titulo=problema.replace('_', ' ').title(),
                            data=datetime.now().strftime("%d/%m/%Y"),
                            dificuldade=nivel,
                            descricao=f"Descrição do problema {problema} para implementação em C",
                            entrada="int* nums;\nint numsSize;\nint target;",
                            saida="int* returnSize;",
                            exemplo_input="nums = [2,7,11,15], target = 9",
                            exemplo_output="[0,1]"
                        )
                        criar_arquivo_c(caminho_problema, conteudo)
                        print(f"  │  │  │  ├─📝 {problema}.md")
            
            elif tipo_conteudo == "solucoes":
                # Cria implementações e testes
                for sub_tipo in ["implementacoes", "testes"]:
                    caminho_subtipo = os.path.join(caminho_tipo, sub_tipo)
                    os.makedirs(caminho_subtipo, exist_ok=True)
                    print(f"  │  │  ├─📁 {sub_tipo}")
                    
                    # Para cada problema, cria arquivos .c e .h
                    problemas = conteudos['enunciados']
                    for nivel, lista_problemas in problemas.items():
                        for problema in lista_problemas:
                            if sub_tipo == "implementacoes":
                                caminho_solucao = os.path.join(caminho_subtipo, f"{problema}.c")
                                conteudo = gerar_solucao_c(problema, nivel)
                                criar_arquivo_c(caminho_solucao, conteudo)
                                print(f"  │  │  │  ├─💻 {problema}.c")
                                
                                caminho_header = os.path.join(caminho_subtipo, f"{problema}.h")
                                criar_arquivo_c(caminho_header, f"/* Header para {problema} */")
                                print(f"  │  │  │  ├─📄 {problema}.h")
                            else:
                                caminho_teste = os.path.join(caminho_subtipo, f"test_{problema}.c")
                                criar_arquivo_c(caminho_teste, f"/* Testes para {problema} */")
                                print(f"  │  │  │  ├─🧪 test_{problema}.c")
            
            elif tipo_conteudo == "materiais":
                # Cria materiais de apoio
                for sub_tipo in ["pdf", "casos_teste"]:
                    caminho_subtipo = os.path.join(caminho_tipo, sub_tipo)
                    os.makedirs(caminho_subtipo, exist_ok=True)
                    print(f"  │  │  ├─📁 {sub_tipo}")
                    
                    if sub_tipo == "pdf":
                        criar_arquivo_c(os.path.join(caminho_subtipo, "README.md"), "# Materiais em PDF")
                        print(f"  │  │  │  ├─📄 README.md")
                    else:
                        for i in range(1, 4):
                            criar_arquivo_c(os.path.join(caminho_subtipo, f"caso_{i}.txt"), f"Caso de teste {i}")
                        print(f"  │  │  │  ├─📋 3 casos teste")

print("\n✅ Estrutura de exercícios em C criada com sucesso!")
print(f"📂 Pasta principal: 03_Exercicios_C")
print(f"🕒 Data: {datetime.now().strftime('%d/%m/%Y %H:%M')}")
if name == "main":
criar_estrutura_c()