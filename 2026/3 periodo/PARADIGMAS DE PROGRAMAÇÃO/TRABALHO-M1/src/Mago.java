package src;
public class Mago extends Personagem {

    private int mana;

    public Mago(String nome, int nivel, int vida, int mana) {
        super(nome, nivel, vida);
        this.mana = mana;
    }

 
    public void atacar() {
        System.out.println("O mago lança uma magia.");
    }

 
    public void defender() {
        System.out.println("O mago cria um escudo mágico.");
    }

    public int getMana() {
        return mana;
    }

    public void setMana(int mana) {
        this.mana = mana;
    }
}
