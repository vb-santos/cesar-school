import java.util.ArrayList;

public class Carrinho {
    private int codigoCliente;
    private String nomeCliente;
    private ArrayList<Mercadoria> mercadorias = new ArrayList<>();
    private static final int LIMITE_MERCADORIA = 20;

    public Mercadoria procurar(int codigo) {
        for (Mercadoria mercadoria : mercadorias) {
            if (mercadoria.getCodigo() == codigo) {
                return mercadoria;
            }
        }

        System.out.println("Mercadoria nao encontrada");
        return null;
    }

    public void cadastrar(Mercadoria m) {
        if (m == null) {
            System.out.println("Mercadoria nao pode ser nula");
            return;
        } else if (mercadorias.size() >= LIMITE_MERCADORIA) {
            System.out.println("Limite de mercadorias já atingido");
            return;
        }

        mercadorias.add(m);
        System.out.println("Mercadoria cadastrada com sucesso");
    }

    public void remover(Mercadoria m) {
        if (m == null) {
            System.out.println("Mercadoria nao pode ser nula");
            return;
        } else if (!mercadorias.contains(m)) {
            System.out.println("Mercadoria nao encontrada");
            return;
        }

        mercadorias.remove(m);
        System.out.println("Mercadoria removida com sucesso");
    }

    public void conteudo() {
        System.out.println("------------ Carrinho de Compras ------------");
        if (mercadorias.isEmpty()) {
            System.out.println("Carrinho de compras vazio");
            return;
        }

        for (Mercadoria m : mercadorias) {
            System.out.println("Mercadoria: " + m.getNome() + " - Codigo: " + m.getCodigo() + "- R$" + m.getPreco());
        }

        System.out.println(
            "------------ Resumo da compra ------------\n" +
            "Total de itens da compra: " + mercadorias.size() + "\n" +
            "Valor total da compra: " + getPrecoTotal() + "\n" +
            "------------------------------------------"
        );
    }

    public double getPrecoTotal() {
        double total = 0;
        for (Mercadoria m : mercadorias) {
            if (m instanceof Computador) {
                total += m.precoAVista();
            } else {
                total += m.getPreco();
            }
        }
        return total;
    }

    public int getCodigoCliente() {
        return codigoCliente;
    }

    public void setCodigoCliente(int codigoCliente) {
        this.codigoCliente = codigoCliente;
    }

    public String getNomeCliente() {
        return nomeCliente;
    }

    public void setNomeCliente(String nomeCliente) {
        this.nomeCliente = nomeCliente;
    }

    public ArrayList<Mercadoria> getMercadorias() {
        return mercadorias;
    }

    public void setMercadorias(ArrayList<Mercadoria> mercadorias) {
        this.mercadorias = mercadorias;
    }
}
