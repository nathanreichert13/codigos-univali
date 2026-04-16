module Q7

let ehPrimo n =
    let rec verificar divisor =
        match divisor with
        | 1 -> true
        | _ when n % divisor = 0 -> false
        | _ -> verificar (divisor - 1)

    if n <= 1 then false
    else verificar (n - 1)
