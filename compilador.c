#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int verificaPos(char texto[], char comparacao, int posicao){
	if (texto[strlen(texto) - posicao] != comparacao){
        return 1;	
    }
    return 0;
}

void printaErroPV(int retorno, int i){
    
    if(retorno == 1){
        printf("Erro encontrado na linha %d. Faltou ; aí em chefe.\n", i);
        exit(0);
    }
}

/* Declaração de constantes */

const char chaveCodigo[8] = "codigo[";
const char chaveInicio[7] = "inicio[";
const char chaveNumero[6] = "numero";
const char chaveLetras[6] = "letras";
const char chaveCaso[5] = "caso(";
const char chaveCasoNao[8] = "]casonao";
const char chaveFimCaso[8] = "]fimcaso";
const char chaveFimInicio[10] = "]fiminicio";
const char chaveFimCodigo[10] = "]fimcodigo";
const char chaveMostra[7] = "mostra(";
const char chaveLeia[5] = "leia(";
const char chaveDenovo[7] = "denovo(";
const char chaveFimDenovo[10] = "]fimdenovo";

int main(){

    FILE *file;
	file = fopen("linguagemty.txt", "r");
	int i = 0;

	if(file == NULL){
		printf("Não foi possivel abrir o arquivo.");
		exit(0);
	}
	
	char texto[100];
	int codigo = 0;
	int inicio = 0;
	int ifs = 0;
	int fimcaso = 0;
	int denovo = 0;
    int faz = 0;
    int retorno = 0;
    int receba = 0;
	

	while(fgets(texto, 100, file) != NULL){
        i++;
        if(strcmp(texto, "\n") == 0){


        }else if(strncmp(chaveCodigo, texto, 7) == 0 && codigo == 0){
            
            codigo++;

        }else if(strncmp(chaveCodigo, texto, 7) == 0 && codigo != 0){
            
            printf("Erro encontrado na linha %d. Voce iniciou o bloco codigo mais de uma vez.\n", i);
            exit(0);

        }else if(inicio == 0 && strncmp(chaveInicio, texto, 7) == 0){
        	
            inicio++;

        }else if(inicio != 0 && strncmp(chaveInicio, texto, 7) == 0){
        	
            printf("Erro encontrado na linha %d. Você inicou o bloco inicio mais de uma vez.\n", i);
            exit(0);

        }else if(strncmp(chaveNumero, texto, 6) == 0){
        	
            printaErroPV(verificaPos(texto, ';', 2), i);
        
        }else if (strncmp(chaveLetras, texto, 6) == 0){

            printaErroPV(verificaPos(texto, ';', 2), i);

		}else if (strncmp(chaveCaso, texto, 5) == 0){
			
            ifs++;
			retorno = verificaPos(texto, ')', 3);
        	
            if(retorno == 1){
        		printf("Erro encontrado na linha %d. Feche o parênteses ')' no CASO.\n", i);
        		exit(0);
        	}
        	
            receba = verificaPos(texto, '[', 2);
        	
            if(receba == 1){
               printf("Erro encontrado na linha %d. Coloque '[' no CASO.\n", i);
               exit(0);
            }  

		}else if (strncmp(chaveCasoNao, texto, 8) == 0 && ifs != 0){
			
            receba = verificaPos(texto, '[', 2);
            
            if(receba == 1){
               printf("Erro encontrado na linha %d. casonao aberto sem '['.\n", i);
               exit(0);
            }

        }else if (strncmp(chaveCasoNao, texto, 8) == 0 && ifs == 0){
            
            printf("Erro encontrado na linha %d. casonao aberto sem um CASO.", i); 
            exit(0);

        }else if (strncmp(chaveMostra,texto, 7) == 0){
        	
            retorno = verificaPos(texto, ')', 3);
        	
            if(retorno == 1){
        		printf("Erro encontrado na linha %d. Feche o parênteses ')' no mostra.\n", i);
        		exit(0);
        	}
        
            printaErroPV(verificaPos(texto, ';', 2), i);

        }else if (strncmp(chaveLeia, texto, 5) == 0){
            
            retorno = verificaPos(texto, ')', 3);
        	
            if(retorno == 1){
        		printf("Erro encontrado na linha %d. Feche o parênteses ')' no leia.\n", i);
        		exit(0);
        	}
        	
            printaErroPV(verificaPos(texto, ';', 2), i);
        
        }else if (strncmp(chaveDenovo, texto, 7) == 0){
        	
            denovo++;
        	retorno = verificaPos(texto, ')', 3);
        	
            if(retorno == 1){
        		printf("Erro encontrado na linha %d. Feche o parênteses ')' no DENOVO.\n", i);
        		exit(0);
        	}

        	receba = verificaPos(texto, '[', 2);
        	
            if(receba == 1){
               printf("Erro encontrado na linha %d. Coloque '[' no DENOVO.\n", i);
               exit(0);
            }
            
        }else if (strncmp(chaveFimDenovo, texto, 10) == 0 && denovo != 0){
            
            denovo--;

        }else if (strncmp(chaveFimDenovo, texto, 10) == 0 && denovo == 0){
        	
            printf("Erro encontrado na linha %d. Bloco Denovo não inicializado.", i);
            exit(0);

      	}else if (strncmp(chaveFimCaso, texto, 8) == 0 && ifs != 0){
           
            ifs--;

        }else if (strncmp(chaveFimCaso, texto, 8) == 0 && ifs == 0){
            
            printf("Erro encontrado na linha %d. Bloco Caso não inicializado.", i);
            exit(0);

      	}else if(strncmp(chaveFimInicio, texto, 10) == 0){
            
            inicio--; 

      	}else if(strncmp(chaveFimCodigo, texto, 10) == 0){
      		
            codigo--;

      	}else{
      		
            texto[strcspn(texto, "\n")] = 0;

            printf("Erro encontrado na linha %d. Comando '%s' desconhecido.\n", i, texto);
            exit(0);

      	}

	}
	if(ifs != 0){
    	
        printf("Erro encontrado. Você abriu um caso e não fechou.\n");
    	exit(0);

    }
    if(denovo != 0){
    	
        printf("Erro encontrado. Você abriu um denovo e não fechou.\n");
        exit(0);

    }
 

	if(codigo == 0 && inicio == 0){
		
        printf("Analise Sintática concluida. Nenhum erro foi encontrado.\n");
    }else if (codigo < 0){

        printf("Você não iniciou o codigo. Utilize 'codigo['\n");

	}else if (codigo > 0){
		
        printf("Erro encontrado. Você não fechou o bloco codigo. Utilize ']fimcodigo'\n");
    }else if (inicio < 0){

        printf("Você não abriu o bloco 'inicio'. Utilize 'inicio['\n");
	
    }else if (inicio > 0){
		
        printf("Erro encontrado. Você não fechou o bloco inicio. Utilize ']fiminicio'\n");

	}

	fclose(file);

}
