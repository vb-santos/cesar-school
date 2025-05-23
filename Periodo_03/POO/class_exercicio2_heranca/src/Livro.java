public class Livro extends Produto {
    private String autor;
    private String editora;

    public Livro(int codigo, String nome, double preco, double desc, String autor, String editora) {
        super(codigo, nome, preco, desc);
        this.autor = autor;
        this.editora = editora;
    }

    @Override
    public String toString() {
        return "Livro{" +
                super.toString() +
                " autor='" + autor + '\'' +
                ", editora='" + editora + '\'' +
                '}';
    }
}
