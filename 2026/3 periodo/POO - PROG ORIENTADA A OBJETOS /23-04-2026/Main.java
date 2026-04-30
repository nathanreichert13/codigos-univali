public class Main {
    public static void main(String[] args) {
        Banco banco = new Banco("Meu Banco", 1);

        ContaCorrente c1 = banco.criarConta(1000);
        ContaCorrente c2 = banco.criarConta(500, 300);

        banco.depositar(c1.getNumeroConta(), 200);
        banco.sacar(c2.getNumeroConta(), 100);
        banco.transferir(c1.getNumeroConta(), c2.getNumeroConta(), 300);

        System.out.println(banco.emitirExtrato(c1.getNumeroConta()));
        System.out.println("----------------------");
        System.out.println(banco.emitirExtrato(c2.getNumeroConta()));
    }
}