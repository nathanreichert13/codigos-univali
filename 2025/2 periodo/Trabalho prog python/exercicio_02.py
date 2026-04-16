n = 1001

while True:
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            break
    else:
        for j in range(2, int((n+2)**0.5) + 1):
            if (n+2) % j == 0:
                break
        else:
            print(n, n+2)
            break
    n += 1
