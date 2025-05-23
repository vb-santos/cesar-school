import java.text.*;
import java.util.Locale;

public class Pessoa {
    DecimalFormatSymbols symbols = new DecimalFormatSymbols(Locale.US);
    DecimalFormat df = new DecimalFormat("##.00", symbols);

    private String nome;
    private int idade;
    private double altura;
    private double peso;

    public Pessoa(String nome, int idade, double altura, double peso) {
        this.nome = nome;
        this.idade = idade;
        this.altura = altura;
        this.peso = peso;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public int getIdade() {
        return idade;
    }

    public void setIdade(int idade) {
        this.idade = idade;
    }

    public double getAltura() {
        return altura;
    }

    public void setAltura(double altura) {
        this.altura = altura;
    }

    public double getPeso() {
        return peso;
    }

    public void setPeso(double peso) {
        this.peso = peso;
    }

    private double calcularIMC(){
        return Double.parseDouble(df.format(peso/(altura*altura)));
    }

    @Override
    public String toString() {
        String stringImc = "";

        if (calcularIMC() <= 18.5) {
            stringImc = "IMC: " + calcularIMC() + " Maior do que o normal";
        }
        else if (calcularIMC() <= 25) {
            stringImc = "IMC: " + calcularIMC() + " Peso Normal";
        }
        else if (calcularIMC() <= 30) {
            stringImc = "IMC: " + calcularIMC() + " Acima do peso normal";
        }
        else {
            stringImc = "IMC: " + calcularIMC() + " Obesidade";
        }

        return "Nome: " + nome + "\nIdade: " + idade + "\nAltura: " + altura + "\nPeso: " + peso + "\n" + stringImc;
    }
}
