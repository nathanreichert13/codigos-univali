import java.time.LocalDate;

public class Corrida {

    private LocalDate data;
    private Autodromo autodromo;

    public Corrida(LocalDate data, Autodromo autodromo) {
        this.data = data;
        this.autodromo = autodromo;
    }

    public LocalDate getData() { return data; }
    public Autodromo getAutodromo() { return autodromo; }
}
