import java.util.ArrayList;
import java.util.List;

public class Equipe {

    private String nome;
    private List<Piloto> pilotos;
    private List<Carro> carros;
    private List<Mecanico> mecanicos;

    public Equipe(String nome, Piloto piloto1, Piloto piloto2,
                  Carro carro1, Carro carro2) {
        this.nome = nome;
        this.pilotos = new ArrayList<>();
        this.carros = new ArrayList<>();
        this.mecanicos = new ArrayList<>();

        // Cada equipe deve ter exatamente 2 pilotos e 2 carros
        this.pilotos.add(piloto1);
        this.pilotos.add(piloto2);
        this.carros.add(carro1);
        this.carros.add(carro2);

        // Cada piloto guia seu próprio carro (1 para 1)
        piloto1.setCarro(carro1);
        piloto2.setCarro(carro2);
    }

    public void adicionarMecanico(Mecanico mecanico) {
        mecanicos.add(mecanico);
    }

    public String getNome() { return nome; }
    public List<Piloto> getPilotos() { return pilotos; }
    public List<Carro> getCarros() { return carros; }
    public List<Mecanico> getMecanicos() { return mecanicos; }
}
