
//Ler um valor inteiro correspondente à idade de uma pessoa (em dias) e imprimi-lo em anos, meses e dias, seguido da respectiva mensagem “ano(s)”, “mes(es)”, “dia(s)”.

//Obs: só para facilitar o cálculo, considere o ano inteiro com 365 dias e 30 dias todos os meses. Nos casos de teste nunca haverá uma situação que permita 12 meses e alguns dias, como 360, 363 ou 364. Este é apenas um exercício com o propósito de testar raciocínios matemáticos simples.//
#include <stdio.h>

int main() {

int idade,  id_dias, id_meses, id_anos;

scanf("%d", &idade);

  id_anos = idade / 365;
  id_meses = (idade% 365) / 30;
  id_dias = ( idade% 365) % 30;
printf("Ano(s) %d\n", id_anos);
printf("Mes(es) %d\n", id_meses);
  printf("Dia(s) %d\n", id_dias);
    return 0;
}