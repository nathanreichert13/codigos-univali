import java.util.ArrayList;
import java.util.List;

public class Campeonato {

    private int ano;
    private String nome;
    private List<Corrida> corridas;
    private List<Equipe> equipes;

    public Campeonato(int ano, String nome) {
        this.ano = ano;
        this.nome = nome;
        this.corridas = new ArrayList<>();
        this.equipes = new ArrayList<>();
    }

    public void definirCorrida(Autodromo autodromo, java.time.LocalDate data) {
        if (corridas.size() >= 20) {
            throw new IllegalStateException("O campeonato já possui 20 corridas.");
        }
        Corrida corrida = new Corrida(data, autodromo);
        corridas.add(corrida);
    }

    public void adicionarEquipe(Equipe equipe) {
        if (equipes.size() >= 12) {
            throw new IllegalStateException("O campeonato já possui 12 equipes.");
        }
        equipes.add(equipe);
    }

    public int getAno() { return ano; }
    public String getNome() { return nome; }
    public List<Corrida> getCorridas() { return corridas; }
    public List<Equipe> getEquipes() { return equipes; }
}
