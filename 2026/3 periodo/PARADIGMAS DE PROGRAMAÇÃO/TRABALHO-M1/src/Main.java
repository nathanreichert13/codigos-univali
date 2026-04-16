package src;
public class Main {

    public static void main(String[] args) {

        Personagem p1 = new Guerreiro("Arthur", 10, 100, 50);
        Personagem p2 = new Mago("Merlin", 12, 80, 120);

        p1.atacar();   // Guerreiro
        p2.atacar();   // Mago

        p1.defender();
        p2.defender();
    }
}
