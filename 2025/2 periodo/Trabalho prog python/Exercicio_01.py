n = int(input("Digite um número: "))

a, b = 0, 1

while b < n:
    a, b = b, a + b

# Verifica qual está mais perto
if n - a <= b - n:
    print(a)
else:
    print(b)
