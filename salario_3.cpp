#include <stdio.h>

#define MAX 5
#define SALARIO_MINIMO 1024

void validar_salario(float salario_temp){
	if(salario_temp < SALARIO_MINIMO){
		printf("Sua remuneracao e menor que o salario minimo.\n");	
	}
}

int main(){
	char nome[40];
	float salario;
	
	int controlador;
	
	for(controlador=1; controlador <= MAX; controlador++){
		printf("Qual seu nome:"); gets(nome);
		printf("Qual valor da sua remuneracao?");
		scanf("%f", &salario);fflush(stdin);
		
		validar_salario(salario);
	}
	return 0;
}
