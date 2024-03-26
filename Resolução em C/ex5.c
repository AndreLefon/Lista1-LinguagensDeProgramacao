#include <stdio.h>

int ex4() {
  int codigoCargo;
  float salario;
  int cont = 0;
  float somaSal = 0;

  // Loop para leitura dos dados
  while (1) {
    // Entrada de dados
    printf("1- Enfermeiro\n2- Nutricionista\n3- Médico\nInforme o código do "
           "cargo (0 para encerrar): ");
    scanf("%d", &codigoCargo);

    // Condição de parada
    if (codigoCargo == 0) {
      break;
    }

    // Entrada de dados
    printf("Informe o salário: ");
    scanf("%f", &salario);

    // Verificação do cargo e cálculo da média salarial dos nutricionistas
    if (codigoCargo == 2) {
      cont++;
      somaSal += salario;
    }
  }

  // Cálculo da média salarial dos nutricionistas
  float mediaSal = 0;
  if (cont > 0) {
    mediaSal = somaSal / cont;
  }

  // Exibição do resultado
  printf("A média salarial dos nutricionistas é: %.2f\n", mediaSal);

  return 0;
}