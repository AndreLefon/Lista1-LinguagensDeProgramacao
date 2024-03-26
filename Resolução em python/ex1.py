def calcular_salario(qtd, valtot):
  salario_base = 1500.00
  comissao1 = 200.00
  comissao_var = valtot * 0.05

  salario_final = salario_base + (comissao1 * qtd) + comissao_var

  return salario_final


qtd = int(input("Informe a quantidade de imóveis vendidos: "))
valtot = float(input("Informe o valor total das vendas: "))

salario_final = calcular_salario(qtd, valtot)

print("O salário final do corretor de imóveis é: R$ {:.2f}".format(
    salario_final))
