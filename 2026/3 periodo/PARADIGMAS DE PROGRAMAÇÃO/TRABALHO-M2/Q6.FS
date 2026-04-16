module Q6

let rec potencia valorBase expoente =
    match expoente with
    | 0 -> 1
    | _ -> valorBase * potencia valorBase (expoente - 1)

let calcular a b =
    if a = b then a * b
    else potencia a b
