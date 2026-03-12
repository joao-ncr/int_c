#include <stdio.h> 
int main() {
    printf("Entre com a sua idade: "); 
    // estruturas conhecidas até aqui
    int idade;
    scanf("%i", &idade);
    // scanf = input = guardar um valor na memória
    
    if (idade>= 18) { 
        printf("Voce pode beber alcool"); 
    }
    // if (condicao) {acao

    // }
    else { 
        // else { 
        
       // }
        printf(" Voce nao pode beber alcool"); 
    }

    return 0; 
}