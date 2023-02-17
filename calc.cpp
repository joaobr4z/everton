#include <stdio.h>

void somar(){
	int n1,n2, resultado;
	printf("Informe um numero:");
	scanf("%d",&n1);fflush(stdin);
	printf("Informe um numero:");
	scanf("%d",&n2);fflush(stdin);
	resultado = n1 + n1;
	printf("Resultado da soma %d", resultado);
}

void subtracao(int n1, int n2){
	int resultado;
	resultado = n1 - n1;
	printf("Resultado da soma %d", resultado);
}

int multiplicacao(int n1, int n2){
	int resultado;
	resultado = n1 * n1;
	return resultado;
}

int main(){
	int opcao;
	int n1,n2, resultado;
	
	printf("Operacoes matematicas \n");
	printf("1 - + \n");
	printf("2 - - \n");
	printf("3 - * \n");
	scanf("%d",&opcao);fflush(stdin);
	
	switch(opcao){
		case 1:
			somar();
			break;
		case 2:
			printf("Informe um numero:");
			scanf("%d",&n1);fflush(stdin);
			printf("Informe um numero:");
			scanf("%d",&n2);fflush(stdin);
			subtracao(n1,n2);
			break;
		case 3:
			printf("Informe um numero:");
			scanf("%d",&n1);fflush(stdin);
			printf("Informe um numero:");
			scanf("%d",&n2);fflush(stdin);
			resultado = multiplicacao(n1,n2);
			printf("Resultado é %d", resultado);
			break;
	}
}
