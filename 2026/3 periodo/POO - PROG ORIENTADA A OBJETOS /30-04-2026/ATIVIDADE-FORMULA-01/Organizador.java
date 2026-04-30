import java.util.ArrayList;
import java.util.List;

public class Organizador {

    private String nome;

    public Organizador(String nome) {
        this.nome = nome;
    }

    public Campeonato criarCampeonato(int ano, String nome) {
        return new Campeonato(ano, nome);
    }

    public boolean inscrever(Campeonato campeonato, Equipe equipe) {
        if (campeonato.getEquipes().size() >= 12) {
            return false;
        }
        campeonato.adicionarEquipe(equipe);
        return true;
    }

    public String getNome() { return nome; }
    public void setNome(String nome) { this.nome = nome; }
}
