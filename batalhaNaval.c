#include <stdio.h>

int main(){
    char linha[10] = {'A','B','C','D','E','F','G','H','I','J'};
    int tabuleiro[10][10];

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            tabuleiro[i][j] = 0; 
        }
        
    }
    

    tabuleiro[2][3] = 3;
    tabuleiro[2][4] = 3;
    tabuleiro[2][5] = 3;

    tabuleiro[5][7] = 3;
    tabuleiro[6][7] = 3;
    tabuleiro[7][7] = 3;

    tabuleiro[3][3] = 3;
    tabuleiro[4][4] = 3;
    tabuleiro[5][5] = 3;

    tabuleiro[3][6] = 3;
    tabuleiro[2][7] = 3;
    tabuleiro[1][8] = 3;


    printf(" TABULEIRO BATALHA NAVAL \n");
    printf("  ");
    for (int j = 0; j < 10; j++)
    {
        printf("%c ", linha[j]);
    }
    printf("\n");

    for (int i = 0; i < 10; i++)
    {
        printf("%2d", i + 1);
        for (int j = 0; j < 10; j++)
        {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");   
    }
    

    
    
    
    
    return 0;
}
