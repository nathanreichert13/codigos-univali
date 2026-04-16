open System
open Q1
open Q2
open Q3
open Q4
open Q5
open Q6
open Q7
open Q8

[<EntryPoint>]
let main argv =
    printfn "Q1: %d" (dividirMaiorPorMenor 10 2)
    printfn "Q2: %s" (tipoTriangulo 3 4 5)
    printfn "Q3: %A" processarLista
    printfn "Q4: %s" (resultadoNotas 7.0 6.0 5.0)
    printfn "Q5: %d" (produtoImpares [1;2;3;4;5])
    printfn "Q6: %d" (calcular 2 3)
    printfn "Q7: %b" (ehPrimo 11)
    printfn "Q8: %d" (somaPrimos [1;2;3;4;5;6;7])
    0

