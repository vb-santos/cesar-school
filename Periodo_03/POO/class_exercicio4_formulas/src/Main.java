public class Main {
    public static void main(String[] args) {
        NumeroComplexo n1 = new NumeroComplexo(3, 4);
        NumeroComplexo n2 = new NumeroComplexo(5, 6);

        NumeroComplexo n3 = n1.adicionar(n2);
        System.out.println(n3.toString());

        n3 = n1.subtrair(n2);
        System.out.println(n3.toString());

        n3 = n1.multiplicar(n2);
        System.out.println(n3.toString());
    }
}
