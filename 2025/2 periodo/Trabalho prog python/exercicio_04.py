alfabeto = "abcdefghijklmnopqrstuvwxyz"
mensagem = input("Digite a mensagem: ")
n = int(input("Digite o deslocamento: "))
cripto = ""

for c in mensagem:
    if c in alfabeto:
        i = (alfabeto.index(c) + n) % 26
        cripto += alfabeto[i]
    else:
        cripto += c

print(cripto)
