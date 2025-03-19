//lista ponteiros exercicio n 4 professor vale nota //
//Faca um programa que leia 2 valores inteiros e chame uma funcao que receba estas 
//2 variaveis e troque o seu conteudo, ou seja, esta funcao˜ e chamada passando duas variaveis A e B por exemplo e, apos a execucao da funcao, A contera o valor de B e B tera o valor de A

#include <stdio.h>

void trocar(int * a, int * b);
int main()
{
    int a,b;

    printf("Digite o valor de a: \n");
    scanf("%d",&a);

    printf("Digite o valor de b: \n");
    scanf("%d",&b);

    trocar(&a,&b);

    printf("Valor de a: %d\n",a);
    printf("Valor de b: %d\n",b);
}



void trocar(int * a, int * b)
{
    int c;

    c = *a;
    *a = *b;
    *b = c;
}