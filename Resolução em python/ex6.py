total_alunos = 5
qtdfinal = 0

for aluno in range(1, total_alunos + 1):
  nota1 = float(input("Informe a primeira nota do aluno {}: ".format(aluno)))
  while nota1 < 0 or nota1 > 10:
    print("Nota inválida. Informe uma nota entre 0 e 10.")
    nota1 = float(input("Informe a primeira nota do aluno {}: ".format(aluno)))

  nota2 = float(input("Informe a segunda nota do aluno {}: ".format(aluno)))
  while nota2 < 0 or nota2 > 10:
    print("Nota inválida. Informe uma nota entre 0 e 10.")
    nota2 = float(input("Informe a segunda nota do aluno {}: ".format(aluno)))

  media = (nota1 + nota2) / 2

  if media >= 2 and media < 6:
    qtdfinal += 1

percent = (qtdfinal / total_alunos) * 100

print("Percentual de alunos em Prova Final: {:.2f}%".format(percent))
