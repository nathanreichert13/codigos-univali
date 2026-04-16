package src;
public class Guerreiro extends Personagem {

    private int forca;

    public Guerreiro(String nome, int nivel, int vida, int forca) {
        super(nome, nivel, vida);
        this.forca = forca;
    }

  
    public void atacar() {
        System.out.println("O guerreiro ataca com espada.");
    }


    public void defender() {
        System.out.println("O guerreiro usa o escudo.");
    }

    public int getForca() {
        return forca;
    }

    public void setForca(int forca) {
        this.forca = forca;
    }
}
