#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
   
    printf("Movimento da Torre \n");

    //Movimento da peca Torre
    int t = 0;
    
    
    while (t < 5){
    
        if (t >= 0)
    {
        printf("Torre andou %d casas para direita. \n", t + 1); //Direcao do movimento Torre
    }
        t++;
    }

    //separacao dos movimentos das pecas
    printf("\n"); //pular linha


    //Movimento peca Bispo

    int b = 0;
    
    printf("Movimento do Bispo: \n");
    do {
        b++;
        printf("o Bispo efetuou %d movimentos para CIMA e DIREITA \n", b);
    }   while (b < 5);
    
    
    printf("\n"); //pular linha
    //Movimento da rainha

    printf("Movimento da rainha: \n");
    

    for (int r = 0; r < 8; r++)
    {
        printf("Rainha efetuou %d movimentos para esquerda! \n", r + 1);
    }

    printf("\n"); //pular linha

    //MOVIMENTO DO CAVALO

    printf("Movimento do Cavalo:\n");
    
     for (int i = 0; i < 1; i++)
    {
        {
        for (int j = 2; j >= 1; j--)
        printf("Cima \n");
        }
        
    printf("Direita\n");
    }

    return 0;
} 
