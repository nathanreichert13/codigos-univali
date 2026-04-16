module Q8

open Q7

let rec somaPrimos lista =
    match lista with
    | [] -> 0
    | x :: xs when ehPrimo x ->
        x + somaPrimos xs
    | _ :: xs ->
        somaPrimos xs
