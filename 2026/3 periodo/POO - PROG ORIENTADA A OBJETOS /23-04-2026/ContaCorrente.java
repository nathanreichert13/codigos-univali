public class ContaCorrente {
    private static int contador = 1;

    private int numero;
    private double saldo;
    private boolean especial;
    private double limite;

    private Movimentacao[] movimentacoes;
    private int totalMov;

    public ContaCorrente(double saldoInicial) {
        this.numero = contador++;
        this.saldo = saldoInicial;
        this.especial = false;
        this.limite = 0;

        movimentacoes = new Movimentacao[100]; // limite de movimentações
        totalMov = 0;
    }

    public ContaCorrente(double saldoInicial, double limite) {
        this.numero = contador++;
        this.saldo = saldoInicial;
        this.especial = true;
        this.limite = limite;

        movimentacoes = new Movimentacao[100];
        totalMov = 0;
    }

    public int getNumeroConta() {
        return numero;
    }

    public double getSaldo() {
        return saldo;
    }

    // adicionar movimentação (método interno)
    private void adicionarMovimentacao(String descricao, char tipo, double valor) {
        if (totalMov >= movimentacoes.length) {
            System.out.println("Limite de movimentações atingido!");
            return;
        }

        movimentacoes[totalMov] = new Movimentacao(descricao, tipo, valor);
        totalMov++;
    }

    public boolean depositar(double valor) {
        if (valor <= 0) return false;

        saldo += valor;
        adicionarMovimentacao("Depósito", 'C', valor);
        return true;
    }

    public boolean sacar(double valor) {
        double limiteDisponivel = saldo + (especial ? limite : 0);

        if (valor <= 0 || valor > limiteDisponivel) return false;

        saldo -= valor;
        adicionarMovimentacao("Saque", 'D', valor);
        return true;
    }

    public void criarMovimentacao(String descricao, char tipo, double valor) {
        adicionarMovimentacao(descricao, tipo, valor);
    }

    public String emitirExtrato() {
        StringBuilder extrato = new StringBuilder();

        extrato.append("Conta: ").append(numero).append("\n");
        extrato.append("Saldo: ").append(saldo).append("\n");

        for (int i = 0; i < totalMov; i++) {
            extrato.append(movimentacoes[i].getMovimentacao()).append("\n");
        }

        return extrato.toString();
    }
}