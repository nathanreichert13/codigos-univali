frase = input("Digite uma frase: ")
frase = frase.lower().replace(" ", "")
if frase == frase[::-1]:
    print("É palíndromo")
else:
    print("Não é palíndromo")
