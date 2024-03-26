#include <stdio.h>

float calcul(int quant, float totvend) {
  float comissao = quant * 200 + totvend * 0.05;
  return comissao;
}

int main() {
  int quant;
  float totvend, comissao, salbase, salfinal;

  printf("Digite a quantidade de imóveis vendidos: ");
  scanf("%d", &quant);

  while (quant <= 0) {
    printf("Quantidade inválida. Digite novamente: ");
    scanf("%d", &quant);
  }

  printf("Digite o valor total de vendas: ");
  scanf("%f", &totvend);

  while (totvend <= 0) {
    printf("Valor inválido. Digite novamente: ");
    scanf("%f", &totvend);
  }

  comissao = calcul(quant, totvend);

  salbase = 1500;
  salfinal = salbase + comissao;

  printf("O salário final do corretor de imóveis é: R$ %.2f\n", salfinal);

  return 0;
}