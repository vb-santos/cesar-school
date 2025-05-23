import java.time.LocalDate;

public class Main {
    public static void main(String[] args) {
        Gato caua = new Gato(
                    "Ana",
                    LocalDate.now().minusDays(6884),
                    LocalDate.now().minusDays(100),
                    true,
                    "Cor Branca, olhos azuis"
                );

        System.out.println("Dono de Cauã: " + caua.getDono());
        System.out.println("Data de Nascimento de Cauã: " + caua.getDataNascimento());
        System.out.println("Data de Vacinação de Cauã: " + caua.getDataVacinacao());
        System.out.println("Cauã é vacinado? " + caua.isVacinado());
        System.out.println("Cauã é um gato de: " + caua.getAspecto());
    }
}