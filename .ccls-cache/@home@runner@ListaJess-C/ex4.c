#include <stdio.h>

int intervalo(int a, int b) {
  if (a < b) {
    int soma = 0;
    for (int i = a; i <= b; i++) {
      soma += i;
    }
    return soma;
  } else {
    printf("Erro: o valor de a deve ser menor que o valor de b.\n");
    return 0;
  }
}

int ex4() {
  int a, b;

  printf("Informe o valor de a: ");
  scanf("%d", &a);
  printf("Informe o valor de b: ");
  scanf("%d", &b);

  int resultado = intervalo(a, b);
  printf("A soma dos números inteiros no intervalo [%d, %d] é: %d\n", a, b,
         resultado);

  return 0;
}