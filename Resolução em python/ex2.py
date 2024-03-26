def calc(preco, forma):
  if forma == 1:
    return preco * 0.85  # 15% de desconto à vista
  elif forma == 2:
    return preco * 0.9  # 10% de desconto no cartão de débito
  elif forma == 3:
    return preco * 0.95  # 5% de desconto no cartão de crédito
  else:
    return preco


preco_total = float(input("Informe o preço total da venda: "))
forma = int(
    input(
        "Informe a forma de pagamento (1 - à vista, 2 - cartão de débito, 3 - cartão de crédito): "
    ))

preco_final = calc(preco_total, forma)

print("O valor final a ser pago é: R$ {:.2f}".format(preco_final))
