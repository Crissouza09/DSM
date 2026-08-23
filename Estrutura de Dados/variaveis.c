#include <stdio.h>

int main ()
{
    char nome[3]; 
    int anoNasc = 0; 
    int anoAtual= 0;

    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf("Digite o ano atual: ");
    scanf("%d", &anoAtual);
    printf("Digite o ano de nascimento: ");
    scanf("%d", &anoNasc);

    int idade = anoAtual - anoNasc;
    
    printf("%s", nome);
    printf("%d", idade);

    return 0;   
} // Fim da função main
