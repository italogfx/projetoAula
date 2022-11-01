#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char jogo[3][3];
#define  LENGTH 20;


void constroiMatriz();
void mostraMatriz();
int testaVencedor(char respostaJ1, char respostaJ2);
int execJogo(char respostaJ1, char respostaJ2);

int main()
{
	
	char p1[20];
	char p2[20];
	char respostaJ1;
	char respostaJ2;
	int res = 0;

    
	printf("\nDigite o nome do jogador 1: ");
	fgets(p1, 20, stdin);
	fflush(stdin);

	printf("\nDigite o nome do jogador 2: ");
	fgets(p2, 20, stdin);
	fflush(stdin);

	do{
	printf("\nJogador 1 escolhe O ou X? ");
	scanf("%c", &respostaJ1);
	fflush(stdin);
	respostaJ1 = toupper(respostaJ1);
	printf("\nJogador 2 escolhe O ou X? ");
	scanf("%c", &respostaJ2);
	fflush(stdin);
	respostaJ2 = toupper(respostaJ2);
	if (respostaJ1 == 'X' || respostaJ1 == 'O' || respostaJ2 == 'X' || respostaJ2 == 'O'){
		res = 1;
	}else{
		printf("\nValores inválidos. Digite X ou O.");
	}
    }while(res != 1);

    constroiMatriz();
    mostraMatriz();
    int resultado = execJogo(respostaJ1, respostaJ2);
    switch (resultado){

                case 0: 
                    printf("\nRESULTADO:_________________________\n");
                    mostraMatriz();
                    printf("\n___________________________________\n");
                    printf("\n\nDeu velha!!!");
                    break;

                case 1:
                    printf("\n\n");
                    printf("\nRESULTADO:_________________________\n");
                    mostraMatriz();
                    printf("\n___________________________________\n");
                    printf("%sfoi o vencedor!!", p1);
                    break;

                case 2:
                    printf("\n\n");
                    printf("\nRESULTADO:_________________________\n");
                    mostraMatriz();
                    printf("\n___________________________________\n");
                    printf("%s foi o vencedor!!", p2);
                    break;
            }


	return 0;
}

void constroiMatriz(){

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
		     jogo[i][j] = '~';
		}
	}

}

void mostraMatriz(){

    printf("\n");
	for (int i = 0; i < 3 ; i++){
		for (int j = 0; j < 3; j++){
			if(j < 2){
				printf(" %c |", jogo[i][j]);
			} else{
				printf(" %c ", jogo[i][j]);
			}
		}
		if(i < 2){
			printf("\n____________\n");
		}
	}
}

int execJogo(char respostaJ1, char respostaJ2){

        int coordLinha = 0;
    	int coordColuna = 0;
    	int jogadas = 1;
    	int jogador = 1;
    	int resultado = 0;

    do{
    	
    	printf("\n\nDigite a LINHA que deseja jogar: ");
    	scanf("%d", &coordLinha);
    	fflush(stdin);
    	printf("\nDigite a COLUNA que deseja jogar: ");
    	scanf("%d", &coordColuna);
    	fflush(stdin);

        coordLinha -=1;
        coordColuna -=1; 


        if (coordLinha < 3 && coordColuna < 3){

        	if (jogo[coordLinha][coordColuna] ==  '~'){
        		
        		if(jogador==1){
        			jogo[coordLinha][coordColuna] = respostaJ1;
        		}else{
        			jogo[coordLinha][coordColuna] = respostaJ2;
        		}

        	}else{
        		printf("\n Posição não está vazia. Tente outra posição\n");
        		jogadas--;
        	    jogador--;
        	}
        }else{
        	printf("\nPosição Inválida, digite novamente.\n");
        	jogadas--;
        	jogador--;
        }
        if(jogadas >= 5){

        	resultado = testaVencedor(respostaJ1, respostaJ2)
        	if(resultado != 0){
        		return resultado;
        	}else if(jogadas == 9 && resultado == 0){
        		return resultado;
        	}
            
        }
        mostraMatriz();
        jogadas++;
        jogador++;
        if (jogador > 2){
          jogador = 1;
        }
    }while(jogadas < 10);
}


int testaVencedor(char respostaJ1, char respostaJ2){

    //Verifica Diagonais

 	if(jogo[0][0] == respostaJ1 && jogo[1][1] == respostaJ1 && jogo[2][2] == respostaJ1){

         return 1;

	}else if (jogo[0][0] == respostaJ2 && jogo[1][1] == respostaJ2 && jogo[2][2] == respostaJ2){

	     return 2;

	}

	if (jogo[0][2] == respostaJ1 && jogo[1][1] == respostaJ1 && jogo[2][0] == respostaJ1){

		return 1;

	}else if(jogo[0][2] == respostaJ2 && jogo[1][1] == respostaJ2 && jogo[2][0] == respostaJ2){

	    return 2;

	}

	//Verifica Linhas

	if(jogo[0][0] == respostaJ1 && jogo [0][1] == respostaJ1 && jogo[0][2] == respostaJ1){

        return 1;

	}else if (jogo[0][0] == respostaJ2  && jogo [0][1] == respostaJ2  && jogo[0][2] == respostaJ2){

        return 2;

	}

	if(jogo[1][0] == respostaJ1  && jogo [1][1] == respostaJ1  && jogo[1][2] == respostaJ1){

        return 1;

	}else if (jogo[1][0] == respostaJ2  && jogo [1][1] == respostaJ2  && jogo[1][2] == respostaJ2){

        return 2;

	}

	if(jogo[2][0] == respostaJ1  && jogo [2][1] == respostaJ1  && jogo[2][2] == respostaJ1){

        return 1;

	}else if (jogo[2][0] == respostaJ2  && jogo [2][1] == respostaJ2  && jogo[2][2] == respostaJ2){

        return 2;

	}

	//verifica Colunas

	if(jogo[0][0] == respostaJ1  && jogo[0][1] == respostaJ1  && jogo[0][2] == respostaJ1){

        return 1;

	}else if(jogo[0][0] == respostaJ2  && jogo[0][1] == respostaJ2  && jogo[0][2] == respostaJ2){

        return 2;

	}

	if(jogo[1][0] == respostaJ1  && jogo[1][1] == respostaJ1  && jogo[1][2] == respostaJ1){

        return 1;

	}else if(jogo[1][0] == respostaJ2  && jogo[1][1] == respostaJ2  && jogo[1][2] == respostaJ2){

        return 2;

	}

	if(jogo[2][0] == respostaJ1  && jogo[2][1] == respostaJ1  && jogo[2][2] == respostaJ1){

        return 1;

	}else if(jogo[2][0] == respostaJ2  && jogo[2][1] == respostaJ2  && jogo[2][2] == respostaJ2){

        return 2;

	}

	return 0;



}


