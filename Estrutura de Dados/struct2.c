#include <stdio.h>

// Adeclaração do struct vem antes da main:
struct Numeros{
    int a;
    float b;
    double c; // aceita fração e menor que o float.
};
//Podemos usar o typedef para criar o tipo Numeros, como o tipo
//int, char, float...
int main()
{
    struct Numeros num;
    printf("\nDigite um numero inteiro: ");
    scanf("%d", &num.a);
    printf("\nDigite um numero real: ");
    scanf("%f", &num.b);
    printf("\nDigite um numero real maior: ");
    scanf("%lf", &num.c);
    
    printf("\nNumero digitados: %d : %f : %lf", num.a, num.b, num.c);
   
   return 0;
}//fim do main
