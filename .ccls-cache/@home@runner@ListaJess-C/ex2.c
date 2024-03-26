#include <stdio.h>

int ex2() {
  float preco_total;
  int forma_pagamento;
  float desconto = 0;
  float preco_final;

  printf("Informe o preço total da venda: ");
  scanf("%f", &preco_total);

  printf("Informe a forma de pagamento (1 - à vista, 2 - cartão de débito, 3 - "
         "cartão de crédito): ");
  scanf("%d", &forma_pagamento);

  switch (forma_pagamento) {
  case 1:
    desconto = preco_total * 0.15;
    break;
  case 2:
    desconto = preco_total * 0.10;
    break;
  case 3:
    desconto = preco_total * 0.05;
    break;
  default:
    printf("Forma de pagamento inválida.\n");
    break;
  }

  preco_final = preco_total - desconto;

  printf("Preço final a ser pago: %.2f\n", preco_final);

  return 0;
}