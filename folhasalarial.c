#include <stdio.h>

float horaExtra(int hed, int hen, float salario);
float salarioFml(int nd);
float salarioB  (float salario, float horaExtraTotal, float salarioFamilia);
float inamps (float salario);
float faltas(int fal, float salario);
float impostoDeRenda(float salarioBruto);
float salarioLiquido(float salarioBruto, float descontoTotal);                  

int main(){

	char nome[20];
    float salario = 0;
    int hed, hen;
    float horaExtraTotal = 0 , salarioFamilia = 0, salarioBruto = 0, descontoTotal = 0;
    float liquidoFinal;
    int nd = 0;      
    int fal;
    int de;
    int ref;
    int val;

	printf("Digite seu nome: \n");
	fgets(nome, 20, stdin);
    fflush(stdin);

    printf("Digite o salario: \n");
    scanf("%f", &salario);

    printf("Digite a quantidade de horas extras diurnas: \n");
    scanf("%d", &hed);

    printf("Digite a quantidade de horas extras noturnas: \n");
    scanf("%d", &hen);

    printf("Digite o numero de dependentes: \n");
    scanf("%d", &nd);

    printf("Digite as faltas (em horas): \n");
    scanf("%d", &fal);

    printf("Digite os descontos eventuais: \n");
    scanf("%d", &de); 

    printf("Digite os gastos com refeições feitas na empresa:\n");
    scanf("%d", &ref);

    printf("Digite os vales retirados durante o mês: \n");
    scanf("%d", &val);

    
    
    horaExtraTotal = horaExtra(hed,hen,salario);
    salarioFamilia = salarioFml(nd);
    salarioBruto = salarioB(salario, horaExtraTotal, salarioFamilia);
    descontoTotal = inamps(salario) + faltas(fal, salario) + impostoDeRenda(salarioBruto) + val + ref + de;
    liquidoFinal = salarioLiquido(salarioBruto,descontoTotal);

    printf("\n\n\n");

    printf("Nome: %s\n", nome);
    printf("Salário: %2.lf\n", liquidoFinal);
    printf("Horas extras: %2.lf\n", horaExtraTotal);
    printf("Salário Família: %2.lf\n", salarioFamilia);
    printf("Salario Bruto: %2.lf\n", salarioBruto);

    return 0;
}

float horaExtra(int hed, int hen, float salario){

    return (((hed*salario)/160) + ((hen*1.2*salario)/160));
}

float salarioFml(int nd){

    return nd*0.05*1212;

}

float salarioB(float salario, float horaExtraTotal, float salarioFamilia){

    return (salario + horaExtraTotal + salarioFamilia);
}

float inamps (float salario){

    return salario*0.08;    
}

float faltas(int fal, float salario){
  
  return (fal*salario)/160;                 

}

float impostoDeRenda(float salarioBruto){

    return salarioBruto*0.08;
}

float salarioLiquido(float salarioBruto, float descontoTotal){

    return salarioBruto-descontoTotal;
}