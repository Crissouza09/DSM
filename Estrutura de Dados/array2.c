#include <stdio.h>

int main()
{
    int array[13];
    int i; // a variavel i remete a index (indice)
    
    // A estrutur de repetição for irá iniciar o indice em 0; verificar
    //conteudo condiz com a comparação, e se condizer entre no laço após o 
    //incremento (aumentar o valor do indice):
    
    for(i = 0; i < 13; i++);
    {
        printf ("Entre com um numero inteiro: ");
        scanf ("%d", &array [i]);
    } //fim do for
    
    printf ("Conteudo dos indices 6 e 12: %d - %d", array[6], array[12]);
    return 0;
} //fim