#include <stdio.h>
int main()
{
    int array[10];
    //irei declarar o i dentro de for, dependendo da versão do compilador C pode ocorrer erro de alocação de memória, mais isso não é comum


    for(int i = 0; i < 10; i++)
    {
        printf("Entre com valor da posição %d: ", (i+1));
        scanf("%d", &array[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        if((i % 2 ) == 0){
            printf("Valor %d esta num indice par, ", array[i]);
        }
    }
}