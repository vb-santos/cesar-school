public class Circulo {
    private int raio;

    public Circulo(int raio) {
        this.raio = raio;
    }

    public int getRaio() {
        return raio;
    }

    public void setRaio(int raio) {
        this.raio = raio;
    }

    public double calcularArea(){
        double area = Math.PI * (raio*raio);
        return area;
    }

    public double calcularComprimento(){
        double comprimento = 2 * Math.PI * raio;
        return comprimento;
    }

    @Override
    public String toString() {
        return "Circulo{" +
                "raio=" + raio + "\n" +
                "comprimento=" + calcularComprimento() + "\n" +
                "area=" + calcularArea() + "\n" +
                '}';
    }
}
