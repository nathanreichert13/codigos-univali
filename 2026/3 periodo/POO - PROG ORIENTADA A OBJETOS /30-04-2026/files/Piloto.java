public class Piloto {

    private int licenca;
    private String nome;
    private Carro carro;

    public Piloto(int licenca, String nome) {
        this.licenca = licenca;
        this.nome = nome;
    }

    public void setCarro(Carro carro) {
        this.carro = carro;
    }

    public int getLicenca() { return licenca; }
    public String getNome() { return nome; }
    public Carro getCarro() { return carro; }
}
