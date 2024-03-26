total_sal = 0
qtd_nutri = 0

while True:
  cod = int(
      input(
          "Informe o código do cargo (1 - Enfermeiro, 2 - Nutricionista, 3 - Médico): "
      ))

  if cod == 0:
    break

  salario = float(input("Informe o salário do funcionário: "))

  if cod == 2:
    total_sal += salario
    qtd_nutri += 1

if qtd_nutri > 0:
  media_sal = total_sal / qtd_nutri
  print("A média salarial dos nutricionistas é: R$ {:.2f}".format(media_sal))
else:
  print("Não foram informados salários de nutricionistas.")
