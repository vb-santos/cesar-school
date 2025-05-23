import requests

requisicao = requests.get("https://economia.awesomeapi.com.br/last/USD-BRL,EUR-BRL,BTC-BRL")

dic_requisicao = requisicao.json()
print(dic_requisicao['USDBRL']['bid'])