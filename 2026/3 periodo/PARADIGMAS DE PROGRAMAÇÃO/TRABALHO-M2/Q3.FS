module Q3

let processarLista =
    [0..20]
    |> List.filter (fun x -> x % 2 = 0)
    |> List.map (fun x -> x * 2)
    |> List.filter (fun x -> x % 6 = 0)
