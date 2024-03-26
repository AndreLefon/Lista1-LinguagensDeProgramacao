def calcular(peso, altura):
  imc = peso / (altura**2)
  return imc


def classificar(imc):
  if imc < 18.5:
    return "Abaixo do peso"
  elif imc < 25.0:
    return "Normal"
  elif imc < 30.0:
    return "Excesso de peso"
  elif imc < 35.0:
    return "Obesidade Grau I"
  elif imc < 40.0:
    return "Obesidade Grau II"
  else:
    return "Obesidade Grau III"


peso = float(input("Informe o peso (em kg): "))
altura = float(input("Informe a altura (em metros): "))

imc = calcular(peso, altura)
situacao = classificar(imc)

print("O seu IMC é {:.2f}".format(imc))
print("Situação: {}".format(situacao))
