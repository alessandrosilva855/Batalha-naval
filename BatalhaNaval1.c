#include <stdio.h>

int main() {
    // Letras para as colunas
    char colunas[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    
    // Criando o tabuleiro (matriz 10x10)
    char tabuleiro[10][10];
    
    // Inicializando o tabuleiro com água (0)
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = '0';
        }
    }
    
    // Criando navios usando arrays unidimensionais
    // Navio horizontal (3x3) 
    int navioHorizontal[3] = {3, 4, 5}; // Colunas do navio horizontal
    int linhaHorizontal = 1; 
    
    // Navio vertical (3x3) 
    int navioVertical[3] = {4, 5, 6}; // Linhas do navio vertical
    int colunaVertical = 6; 
    
    // Posicionando navio horizontal no tabuleiro
    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaHorizontal][navioHorizontal[i]] = '3';
    }
    
    // Posicionando navio vertical no tabuleiro
    for (int i = 0; i < 3; i++) {
        tabuleiro[navioVertical[i]][colunaVertical] = '3';
    }
    
    // Imprimindo o cabeçalho 
    printf("TABULEIRO DE BATALHA NAVAL\n");
    printf("--------------------------\n\n");
    printf("0 = Água | 3 = Navio\n\n");
    
    // Imprimindo as letras das colunas
    printf("   "); // Espaço para alinhar com os números das linhas
    for (int i = 0; i < 10; i++) {
        printf("%c ", colunas[i]);
    }
    printf("\n");
    
    // Imprimindo o tabuleiro com números das linhas
    for (int i = 0; i < 10; i++) {
        // Imprime o número da linha com 2 dígitos
        printf("%2d ", i + 1);
        
        // Imprime cada célula do tabuleiro
        for (int j = 0; j < 10; j++) {
            printf("%c ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
