import java.time.LocalDate;

public class Main {

    public static void main(String[] args) {

        // Criando o organizador (FIA)
        Organizador fia = new Organizador("FIA");

        // Criando o campeonato
        Campeonato campeonato = fia.criarCampeonato(2025, "Campeonato Mundial de Fórmula 1");

        // Criando autódromo e corrida
        Autodromo interlagos = new Autodromo("São Paulo, Brasil");
        campeonato.definirCorrida(interlagos, LocalDate.of(2025, 11, 9));

        // Criando pilotos, carros e equipe
        Piloto piloto1 = new Piloto(44, "Lewis Hamilton");
        Piloto piloto2 = new Piloto(63, "George Russell");

        Carro carro1 = new Carro(44);
        Carro carro2 = new Carro(63);

        Equipe mercedes = new Equipe("Mercedes", piloto1, piloto2, carro1, carro2);

        // Adicionando mecânicos (quantidade livre)
        mercedes.adicionarMecanico(new Mecanico("Carlos Silva"));
        mercedes.adicionarMecanico(new Mecanico("John Smith"));
        mercedes.adicionarMecanico(new Mecanico("Ana Souza"));

        // Inscrevendo equipe no campeonato
        boolean inscrito = fia.inscrever(campeonato, mercedes);

        // Exibindo resultados
        System.out.println("Campeonato: " + campeonato.getNome() + " " + campeonato.getAno());
        System.out.println("Equipe inscrita: " + inscrito);
        System.out.println("Equipe: " + mercedes.getNome());
        System.out.println("Mecânicos: " + mercedes.getMecanicos().size());

        for (Piloto p : mercedes.getPilotos()) {
            System.out.println("Piloto: " + p.getNome() + " | Carro #" + p.getCarro().getNumero());
        }

        System.out.println("Corridas agendadas: " + campeonato.getCorridas().size());
        System.out.println("Autódromo: " + campeonato.getCorridas().get(0).getAutodromo().getLocal());
    }
}
