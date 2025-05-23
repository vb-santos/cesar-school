import java.time.LocalDate;

public class Gato extends Animal {
    private boolean vacinado;
    private String aspecto;

    public Gato(String dono, LocalDate dataNascimento, LocalDate dataVacinacao, boolean vacinado, String aspecto) {
        super(dono, dataNascimento, dataVacinacao);
        this.vacinado = vacinado;
        this.aspecto = aspecto;
    }

    public boolean isVacinado() {
        return vacinado;
    }

    public void setVacinado(boolean vacinado) {
        this.vacinado = vacinado;
    }

    public String getAspecto() {
        return aspecto;
    }

    public void setAspecto(String aspecto) {
        this.aspecto = aspecto;
    }
}
