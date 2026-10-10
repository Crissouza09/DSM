#include <stdio.h>
struct Produto{
    char nome[20];
    char marca[15]; //reserva de espaço
    float preco;
};
int main()
{
    struct Produto prod;  // referencia que vai ser utilizada

    printf("\nDigite o nome do produto: ");
    scanf("%s", prod.nome);
    printf("\nDigite a marca do produto: ");
    scanf("%s", prod.marca);
    printf("\nDigite o preco do produto: ");
    scanf("%f", &prod.preco);
    
    printf("\nPRODUTO\n |%s   | %s    |RS  %f ", prod.nome, prod.marca, prod.preco);
    
    return 0;
}//fim do main
