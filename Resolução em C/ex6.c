#include <stdio.h>

int ex6() {
  int numAlunos = 5;
  float notas[numAlunos];
  char nomes[numAlunos][50];
  int contFinal = 0;

  for (int i = 0; i < numAlunos; i++) {
    // Entrada de dados
    printf("Informe o nome do aluno %d: ", i + 1);
    scanf("%s", nomes[i]);

    do {
      printf("Informe a primeira nota do aluno %s: ", nomes[i]);
      scanf("%f", &notas[i]);
      if (notas[i] < 0 || notas[i] > 10) {
        printf("Nota inválida. Digite uma nota entre 0 e 10.\n");
      }
    } while (notas[i] < 0 || notas[i] > 10);

    do {
      printf("Informe a segunda nota do aluno %s: ", nomes[i]);
      scanf("%f", &notas[i]);
      if (notas[i] < 0 || notas[i] > 10) {
        printf("Nota inválida. Digite uma nota entre 0 e 10.\n");
      }
    } while (notas[i] < 0 || notas[i] > 10);

    float media = (notas[i] + notas[i]) / 2;

    if (media < 2) {
      printf("Aluno %s: Reprovado\n", nomes[i]);
    } else if (media < 6) {
      contFinal++;
      printf("Aluno %s: Prova Final\n", nomes[i]);
    } else {
      printf("Aluno %s: Aprovado\n", nomes[i]);
    }
  }

  float percen = (float)contFinal / numAlunos * 100;

  printf("Percentual de alunos em Prova Final: %.2f%%\n", percen);

  return 0;
}