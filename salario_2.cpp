#include <stdio.h>

#define MAX 5
#define SALARIO_MINIMO 1024

void print_message(){
	printf("Sua remuneracao e menor que o salario minimo.\n");
}

int main(){
	char nome[40];
	float salario;
	
	int controlador;
	
	for(controlador=1; controlador <= MAX; controlador++){
		printf("Qual seu nome:"); gets(nome);
		printf("Qual valor da sua remuneracao?");
		scanf("%f", &salario);fflush(stdin);
		
		if(salario < SALARIO_MINIMO){
			print_message();	
		}
	}
	return 0;
}
