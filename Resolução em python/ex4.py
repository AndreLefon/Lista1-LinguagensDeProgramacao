def intervalo(a, b):
  soma = 0
  for num in range(a, b + 1):
    soma += num
  return soma


a = int(input("Informe o valor de a: "))
b = int(input("Informe o valor de b: "))

if a < b:
  soma_intervalo = intervalo(a, b)
  print("A soma dos números inteiros no intervalo [{}, {}] é: {}".format(
      a, b, soma_intervalo))
else:
  print("Erro: o valor de a não é menor que o valor de b.")
