#include <stdio.h>
int main()
//Crie um algoritmo em c que armazene valores inteiros em uma matriz 3x3 e apresente somente os valores contidos na diagonal principal da matriz
{
    int matriz2d[3][3]; //[][][]
                        //[][][]
                        //[][][]
    for(int linha = 0; linha < 3; linha++)
    {
        for(int col = 0; col < 3; col++)
        {
            printf("Entre com o valor: ");
            scanf("%d", &matriz2d[linha][col]);
        }//fim da coluna
    }//fim da linha
    for(int linha = 0; linha < 3; linha++)
    {
        for(int col = 0; col < 3; col++)
        {
            if(linha==col)
            {
                printf("\n%d", matriz2d[linha][col]);
            }
        }//fim da coluna
    }//fim da linha
    return 0;
}