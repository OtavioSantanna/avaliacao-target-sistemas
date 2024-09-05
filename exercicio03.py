import json

with open('dados.json') as arquivo:
    dados = json.load(arquivo)

valores = [item['valor'] for item in dados if item['valor'] != 0.0]

media = sum(valores) / len(valores)
minimo = min(valores)
maximo = max(valores)
acimaDaMedia = 0
for valor in valores:
    if valor > media:
        acimaDaMedia += 1

print("O menor valor de faturamento em um dia do mes foi: ",minimo)
print("O maior valor de faturamento em um dia do mes foi: ",maximo)
print("O numero de dias que o faturamento diario foi superior a media mensal foi de: ",acimaDaMedia)