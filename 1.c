#include <stdio.h>
#include <stdlib.h>

//nome e salario de 5 pessoas verificar e printar aqueles que são acima de 1024

int main(){
    
    char nome[20], buffer[100];
    int n=0;
    double salario;

    for (n = 0; n <= 4; n++) {

        printf("Digite aqui o seu nome:\n");
        fgets(nome, 20, stdin);
        printf("Digite aqui o seu salario:\n");
        fgets(buffer, 100, stdin);
        sscanf(buffer, "%lf", &salario);

        if(salario >= 1024){
            printf("\n Seu salario é acima de 1024 \n");
        }
    }
    return 0;
}
