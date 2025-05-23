
import java.util.*;

public class Operacoes {
    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {
        System.out.println("Digite o valor do raio: ");
        int raio =  scanner.nextInt();

        Circulo c1 = new Circulo(raio);

        double area = c1.calcularArea();
        double comprimento = c1.calcularComprimento();

        System.out.println(c1.toString());
    }
}