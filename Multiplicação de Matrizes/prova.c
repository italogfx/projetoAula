#include <stdio.h>

/* declaracão das variáveis globais */
int M = 0, N = 0, P = 0;

/* Protótipo dos métodos */
void mostraMatrizA(int matriz[M][N]);
void mostraMatrizB(int matriz[N][P]);
void mostraMatrizC(int matriz[M][P]);
void multiplicaMatriz(int A[M][N], int B[N][P], int C[M][P]);

int main(){

    /* Entrada de dados */
    printf("Digite um valor para M: \n");
    scanf("%d", &M);
    fflush(stdin);

    printf("Digite um valor para N: \n");
    scanf("%d", &N);
    fflush(stdin);

    printf("Digite um valor para P: \n");
    scanf("%d", &P);
    fflush(stdin);

    int A[M][N];
    int B[N][P];
    int C[M][P];
    int res = 0;
    int entrada = 0;

/* Preenchendo o matriz A */
    for(int i = 0; i < M ; i++){
    	for (int j = 0; j < N ; j++){
            
            //laço de repetição para verificar todos os valores de entrada
            do{
            printf("Digite um valor entre -10 e 10 para a matriz A [%d][%d]: ", i, j);
            scanf("%d", &entrada);
            fflush(stdin);
               if(entrada < 10 && entrada > -10){
                  res = 1; 	
            	  A[i][j] = entrada;
                }else{
            	  printf("Valor inválido. Digite um valor Maior que -10 e menor que 10:");
                }
            }while(res != 1);    
    	}
    }
    
    //resetando os valores
    entrada = 0;
    res = 0;
    printf("\n");

    /* Preenchendo o matriz B */
    for(int i = 0; i < N; i++){
    	for (int j = 0; j < P ; j++){
            
            //laço de repetição para verificar todos os valores de entrada
            do{
            printf("Digite um valor entre -10 e 10 para a matriz B [%d][%d]: ", i, j);
            scanf("%d", &entrada);
            fflush(stdin);
               if(entrada < 10 && entrada > -10){
                  res = 1; 	
            	  B[i][j] = entrada;
                }else{
            	  printf("Valor inválido. Digite um valor Maior que -10 e menor que 10:");
                }
            }while (res != 1);    
    	}
    }


    //chamando os métodos.
    mostraMatrizA(A);
    mostraMatrizB(B);
    multiplicaMatriz(A, B, C);
    mostraMatrizC(C);


	return 0;
}

//Função que mostra a Matriz A
void mostraMatrizA(int matriz[M][N]){
	printf("\nMATRIZ A ----------------------------------\n");
	for(int i=0; i < M; i++){
		for (int j = 0;j < N; j++){
             printf("%d ", matriz[i][j]);
             if (j == (N-1)){
                 printf("\n");
             }
		}
	}
}

//Função que mostra a Matriz B
void mostraMatrizB(int matriz[N][P]){
	printf("\nMATRIZ B ----------------------------------\n");
	for(int i=0; i < N; i++){
		for (int j = 0;j < P; j++){
             printf("%d ", matriz[i][j]);
             if (j == (P-1)){
                 printf("\n");
             }
		}
	}
}

//Função que mostra a Matriz C
void mostraMatrizC(int matriz[M][P]){
	printf("\nMATRIZ C (RESULTADO) ----------------------\n");
	for(int i=0; i < M; i++){
		for (int j = 0;j < P; j++){
             printf("%d ", matriz[i][j]);
             if (j == (P-1)){
                 printf("\n");
             }
		}
	}
}


//Funçāo que multiplica as matrizes A e B e coloca dentro de C
void multiplicaMatriz(int A[M][N], int B[N][P], int C[M][P]){
    
    int somaAB = 0;

	for(int i = 0; i < M; i++){
		for(int j = 0; j < P; j++){
            for(int k = 0; k < N; k++){
            	somaAB += A[i][k] * B[k][j];
            }
            C[i][j]= somaAB;
            somaAB = 0;
		}
	}
}