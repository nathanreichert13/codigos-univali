

public class Banco {
    private String nome;
    private int numero;

    private ContaCorrente[] contas;
    private int totalContas;

    public Banco(String nome, int numero) {
        this.nome = nome;
        this.numero = numero;

        contas = new ContaCorrente[100]; // limite de 100 contas
        totalContas = 0;
    }

    public ContaCorrente criarConta(double saldoInicial) {
        if (totalContas >= contas.length) {
            System.out.println("Limite de contas atingido!");
            return null;
        }

        ContaCorrente nova = new ContaCorrente(saldoInicial);
        contas[totalContas] = nova;
        totalContas++;

        return nova;
    }

    public ContaCorrente criarConta(double saldoInicial, double limite) {
        if (totalContas >= contas.length) {
            System.out.println("Limite de contas atingido!");
            return null;
        }

        ContaCorrente nova = new ContaCorrente(saldoInicial, limite);
        contas[totalContas] = nova;
        totalContas++;

        return nova;
    }

    // Buscar conta
    private ContaCorrente buscarConta(int numeroConta) {
        for (int i = 0; i < totalContas; i++) {
            if (contas[i].getNumeroConta() == numeroConta) {
                return contas[i];
            }
        }
        return null;
    }

    public boolean depositar(int numeroConta, double valor) {
        ContaCorrente c = buscarConta(numeroConta);
        if (c == null) return false;

        return c.depositar(valor);
    }

    public boolean sacar(int numeroConta, double valor) {
        ContaCorrente c = buscarConta(numeroConta);
        if (c == null) return false;

        return c.sacar(valor);
    }

    public boolean transferir(int origem, int destino, double valor) {
        ContaCorrente c1 = buscarConta(origem);
        ContaCorrente c2 = buscarConta(destino);

        if (c1 == null || c2 == null) return false;

        if (c1.sacar(valor)) {
            c2.depositar(valor);
            return true;
        }

        return false;
    }

    public String emitirExtrato(int numeroConta) {
        ContaCorrente c = buscarConta(numeroConta);
        if (c == null) return "Conta não encontrada";

        return c.emitirExtrato();
    }

    public boolean excluirConta(int numeroConta) {
        for (int i = 0; i < totalContas; i++) {
            if (contas[i].getNumeroConta() == numeroConta) {

                // deslocar elementos pra esquerda
                for (int j = i; j < totalContas - 1; j++) {
                    contas[j] = contas[j + 1];
                }

                contas[totalContas - 1] = null;
                totalContas--;

                return true;
            }
        }
        return false;
    }
}