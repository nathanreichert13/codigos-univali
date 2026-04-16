module Q4

let resultadoNotas n1 n2 n3 =

    let calcularMedia a b c =
        (a + b + c) / 3.0

    let verificarAprovacao media =
        media >= 6.0

    let mensagem aprovado =
        match aprovado with
        | true -> "Aprovado"
        | false -> "Reprovado"

    calcularMedia n1 n2 n3
    |> verificarAprovacao
    |> mensagem
