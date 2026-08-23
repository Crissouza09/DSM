#include <stdio.h>

int main ()
{
    char nome[10]; 
    int anoNasc = 0; 
    int anoAtual= 0;

    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf("Digite o ano atual: ");
    scanf("%d", &anoAtual);
    printf("Digite o ano de nascimento: ");
    scanf("%d", &anoNasc);

    int idade = anoAtual - anoNasc;
    
    if(idade >=18)
    {
        printf("%s, voce tem %d anos e pode tirar CNH", nome, idade);
    }

    return 0;   
} // Fim da função main
