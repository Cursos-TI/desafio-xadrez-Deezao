#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
   
    printf("Faça o movimento da sua Torre \n");

    //Movimento da peca Torre
    int t = 0;
    
    
    while (t < 5){
    
        if (t >= 0)
    {
        printf("Torre faz o movimento para direita. \n"); //Direcao do movimento Torre
    }

        t++;

    }

    //separacao dos movimentos das pecas
    printf("\n");


    //Movimento peca Bispo

    int b;

    do
    {   
        printf("Digite a quantidade de casas para movimentar o Bispo: \n");
        scanf("%d", &b);

        if(b <= 10){
        printf("o Bispo efetuou %d movimentos para CIMA e DIREITA \n");
      }      
    } while (b != 10);
    

    //Movimento da rainha

    int r, movimento;

    printf("Digite quantos movimentos quer efetuar com a Rainha: \n");
    scanf("%d", &movimento);

    for (r = 0; r < 8; r++)
    {
        printf("Rainha efetuou %d movimentos para esquerda! \n", r + movimento);
    }
    

    return 0;
}
