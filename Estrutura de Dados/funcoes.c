#include <stdio.h> 

// Declarando as funções:
void seApresentar();
float retornaSoma();

int main()
{
    //Invocando a função seApresentar():
    seApresentar();
    //A variável resultado guarda o que vier da função retornaSoma
    float resultado = retornaSoma();
    
    //Mostrando o conteúdo da variável resultado:
    printf("\nResultado da soma: %f", resultado);
    
    return 0;
} // fim do main

float retornaSoma()
{
    float numA = 0.0, numB = 0.0;
    printf("\nDigite o primeiro numero: ");
    scanf("%f", &numA);
    printf("\nDigite o segundo numero: ");
    scanf("%f", &numB);
  
    return numA + numB;
}  //fim do retornaSoma

void seApresentar()
{
    printf("\n Ola, sou eu oh!");
    
    //Percebam que não tem o return pois a tem 
    // o tipo de retorno definido como vazio (void)
    //fim da seApresentar
}
