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

// c x python - 13 linhas x 5 linhas
// idade = int(input("Entre com a sua idade :")
// if idade >= 18:
// print("Você pode consumir alcool")
// else: 
// print(" Você nao pode consumir alcool")  