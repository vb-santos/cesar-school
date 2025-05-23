import java.time.LocalDate;

public class Animal {
    private String dono;
    private LocalDate dataNascimento;
    private LocalDate dataVacinacao;

    public Animal(String dono, LocalDate dataNascimento, LocalDate dataVacinacao) {
        this.dono = dono;
        this.dataNascimento = dataNascimento;
        this.dataVacinacao = dataVacinacao;
    }

    public String getDono() {
        return dono;
    }

    public void setDono(String dono) {
        this.dono = dono;
    }

    public LocalDate getDataNascimento() {
        return dataNascimento;
    }

    public void setDataNascimento(LocalDate dataNascimento) {
        this.dataNascimento = dataNascimento;
    }

    public LocalDate getDataVacinacao() {
        return dataVacinacao;
    }

    public void setDataVacinacao(LocalDate dataVacinacao) {
        this.dataVacinacao = dataVacinacao;
    }
}
