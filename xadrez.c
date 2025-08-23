#include <stdio.h>


//recursividade Torre
void MovimentoTorre(int torre ){
    if (torre > 0){
        MovimentoTorre(torre - 1); //mesmo que esteja diminuindo -1, o printf estando abaixo da condicao ele executa ao contrario da condicao
        printf("Torre executou %d movimentos para a direita\n", torre);
    }
}

// Recursividade Bispo
void MovimentoBispo(int bispo){
    if (bispo > 0){
        MovimentoBispo(bispo - 1);
        printf("o Bispo executou %d movimentos para CIMA e DIREITA. \n", bispo);
    }
        
}

// Recursividade Rainha
void MovimentoRainha(int rainha){
    if (rainha > 0){
        MovimentoRainha(rainha - 1);
        printf("Rainha executou %d movimentos para esquerda \n", rainha);
    }
}

int main() {

   //Bispo

    printf("Movimento da Torre \n");

    MovimentoTorre(5);

    printf("\n "); //pular linha

    //Bispo
    
    printf("Movimento do Bispo \n");

    MovimentoBispo(5);

    printf("\n "); //pular linha


    // Rainha
    
    printf("Movimento Rainha\n");

    MovimentoRainha(8);

    printf("\n "); //pular linha


    // Cavalo

    printf("Movimento do Cavalo:\n");
    
     for (int i = 0; i < 1; i++)//i = 0 e adicionado 1 no i++ sendo se i < 1 ele reproduz apenas uma vez
    {
        {
        for (int j = 2; j >= 1; j--)// aqui o j é = 2, faça-se a pergunta se j >= 1 se sim ele executa o programa, logo após j-- diminui 2-1 tornando j = 1, faça-se a pergunta novamente se j >= 1 se sim executa o programa novamente.
        printf("Cima \n");
        }
        
    printf("Direita\n");
    }

    return 0;
} 










//Codigo Antigo...

    //Movimento da peca Torre
    //int t = 0;
    
    
    //while (t < 5){
    
        //printf("Torre andou %d casas para direita. \n", t + 1); //Direcao do movimento Torre
   
        //t++;
   // }

    //separacao dos movimentos das pecas
   // printf("\n"); //pular linha


    //Movimento peca Bispo

    //int b = 0;
    
   // printf("Movimento do Bispo: \n");
    //do {
      //  b++;
        //printf("o Bispo efetuou %d movimentos para CIMA e DIREITA \n", b);
   // }   while (b < 5);
    
    
    //printf("\n"); //pular linha
    //Movimento da rainha

    //printf("Movimento da rainha: \n");
    

    //for (int r = 0; r < 8; r++)
    //{
    //    printf("Rainha efetuou %d movimentos para esquerda! \n", r + 1);
   // }

    //printf("\n"); //pular linha

    
//MOVIMENTO DO CAVALO
    
