public class Computador extends Mercadoria {
    private String configuracao;

    public Computador(int codigo, String nome, double preco, String configuracao) {
        super(codigo, nome, preco, 10);
        this.configuracao = configuracao;
    }

    @Override
    public double precoAVista() {
        return (getPreco() - (0.1 * getPreco()));
    }

    public String getConfiguracao() {
        return configuracao;
    }

    public void setConfiguracao(String configuracao) {
        this.configuracao = configuracao;
    }
}
