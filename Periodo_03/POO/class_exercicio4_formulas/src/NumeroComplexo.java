public class NumeroComplexo {
    private int A;
    private int B;

    public NumeroComplexo(int a, int b) {
        A = a;
        B = b;
    }

    public NumeroComplexo adicionar(NumeroComplexo n) {
        return new NumeroComplexo((A + n.A), (B + n.B));
    }

    public NumeroComplexo subtrair(NumeroComplexo n) {
        return new NumeroComplexo((A - n.A), (B - n.B));
    }

    public NumeroComplexo multiplicar(NumeroComplexo n) {
        return new NumeroComplexo((A*n.A - B+n.B), (A+n.B + B*n.A));
    }

    @Override
    public String toString() {
        return "NumeroComplexo{" + A + " + " + B + "*i" + '}';
    }
}
