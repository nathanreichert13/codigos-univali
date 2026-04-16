module Q2

let tipoTriangulo a b c =
    if a >= b + c || b >= a + c || c >= a + b then
        "Não forma um triângulo"
    elif a = b && b = c then
        "Equilátero"
    elif a = b || a = c || b = c then
        "Isósceles"
    else
        "Escaleno"
