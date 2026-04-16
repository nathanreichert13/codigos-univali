function calcular() {
    // Pegando os valores dos campos
    let objetivo = parseFloat(document.getElementById("objetivo").value);
    let inicial = parseFloat(document.getElementById("inicial").value);
    let mensal = parseFloat(document.getElementById("mensal").value);
    let juros = parseFloat(document.getElementById("juros").value);
    let divResultado = document.getElementById("resultado");

    // Validando se os campos estao vazios ou sao menores/iguais a zero
    // O juros pode ser zero, mas os outros precisam ser maiores que zero
    if (!objetivo || objetivo <= 0 || !inicial || inicial <= 0 || !mensal || mensal <= 0 || isNaN(juros) || juros < 0) {
        alert("Por favor, preencha todos os campos com valores maiores que zero! (Juros pode ser 0 ou mais)");
        return;
    }

    let saldo = inicial;
    let meses = 0;
    let taxaJuros = juros / 100;

    // Se o valor inicial ja for maior que o objetivo, nem precisa calcular
    if (saldo >= objetivo) {
        divResultado.innerHTML = "Voce ja alcancou seu objetivo!";
        return;
    }

    // Enquanto o saldo for menor que o objetivo, vai somando os meses
    // Usando um limite de 1000 meses para nao travar o navegador se os juros forem ruins
    while (saldo < objetivo && meses < 1000) {
        // Aplica o juros sobre o saldo atual
        saldo = saldo + (saldo * taxaJuros);
        // Adiciona o deposito mensal
        saldo = saldo + mensal;
        meses++;
    }

    if (meses >= 1000) {
        divResultado.innerHTML = "Com esses valores, vai demorar mais de 1000 meses!";
    } else {
        divResultado.innerHTML = "Voce vai alcancar seu objetivo em " + meses + " meses!";
    }
}

function limpar() {
    // Limpa todos os campos de input
    document.getElementById("objetivo").value = "";
    document.getElementById("inicial").value = "";
    document.getElementById("mensal").value = "";
    document.getElementById("juros").value = "";
    document.getElementById("resultado").innerHTML = "";
}