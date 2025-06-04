@echo off
setlocal EnableDelayedExpansion

:: Nome da pasta raiz
set "ROOT=exercicios"

:: Criação das subpastas
set "DIR1=%ROOT%\algoritmos_ordenacao"
set "DIR2=%ROOT%\structs"
set "DIR3=%ROOT%\matematica"
set "DIR4=%ROOT%\tads"

echo Criando estrutura de pastas...

mkdir "%DIR1%"
mkdir "%DIR2%"
mkdir "%DIR3%"
mkdir "%DIR4%"

:: Criação dos arquivos com conteúdo básico

:: Algoritmos de ordenação
for %%F in (
    ex1_selection_sort
    ex7_quicksort
    ex9_bubble_sort
) do (
    set "FILE=%DIR1%\%%F.c"
    > "!FILE!" (
        echo // Arquivo: %%F.c
        echo // TODO: Implementar o exercício relacionado
        echo #include ^<stdio.h^>
        echo.
        echo int main() {
        echo     // TODO: Implementar
        echo     return 0;
        echo }
    )
)

:: Structs
for %%F in (
    ex2_empregado
    ex3_aeroporto
) do (
    set "FILE=%DIR2%\%%F.c"
    > "!FILE!" (
        echo // Arquivo: %%F.c
        echo // TODO: Implementar o exercício relacionado
        echo #include ^<stdio.h^>
        echo.
        echo int main() {
        echo     // TODO: Implementar
        echo     return 0;
        echo }
    )
)

:: Matemática
for %%F in (
    ex4_goldbach_700_1100
    ex5_goldbach_ate_n
    ex6_newton_raphson
) do (
    set "FILE=%DIR3%\%%F.c"
    > "!FILE!" (
        echo // Arquivo: %%F.c
        echo // TODO: Implementar o exercício relacionado
        echo #include ^<stdio.h^>
        echo.
        echo int main() {
        echo     // TODO: Implementar
        echo     return 0;
        echo }
    )
)

:: TADs
set "FILE=%DIR4%\ex8_tad_complexo.c"
> "!FILE!" (
    echo // Arquivo: ex8_tad_complexo.c
    echo // TODO: Implementar o exercício relacionado
    echo #include ^<stdio.h^>
    echo.
    echo int main() {
    echo     // TODO: Implementar
    echo     return 0;
    echo }
)

echo.
echo ✅ Estrutura criada com sucesso!
pause
