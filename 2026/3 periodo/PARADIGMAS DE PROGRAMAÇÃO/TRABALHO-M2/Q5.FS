module Q5

let rec produtoImpares lista =
    match lista with
    | [] -> 1
    | x :: xs when x % 2 <> 0 ->
        x * produtoImpares xs
    | _ :: xs ->
        produtoImpares xs
