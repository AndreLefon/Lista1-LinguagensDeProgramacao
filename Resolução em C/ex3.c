int ex3() {
  float peso, altura, IMC;

  printf("Informe seu peso: ");
  scanf("%f", &peso);

  printf("Informe sua altura: ");
  scanf("%f", &altura);

  IMC = peso / (altura * altura);

  if (IMC < 18.5) {
    printf("Situação: Abaixo do peso\n");
  } else if (IMC >= 18.5 && IMC < 24.9) {
    printf("Situação: Normal\n");
  } else if (IMC >= 25 && IMC < 29.9) {
    printf("Situação: Excesso de peso\n");
  } else if (IMC >= 30 && IMC < 34.9) {
    printf("Situação: Obesidade Leve (Grau I)\n");
  } else if (IMC >= 35 && IMC < 39.9) {
    printf("Situação: Obesidade Severa (Grau II)\n");
  } else {
    printf("Situação: Obesidade Mórbida (Grau III)\n");
  }

  return 0;
}