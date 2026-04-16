package src;
public class Inventario {

    private int capacidade;
    private int quantidadeItens;

    public Inventario(int capacidade) {
        this.capacidade = capacidade;
        this.quantidadeItens = 0;
    }

    public void adicionarItem() {
        quantidadeItens++;
    }

    public int getCapacidade() {
        return capacidade;
    }

    public void setCapacidade(int capacidade) {
        this.capacidade = capacidade;
    }

    public int getQuantidadeItens() {
        return quantidadeItens;
    }
}
