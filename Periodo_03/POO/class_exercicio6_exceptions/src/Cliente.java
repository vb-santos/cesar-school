public class Cliente {
    private int codigo;
    private String nome;
    private String cpf;

    public Cliente(int codigo, String nome, String cpf) {
        setCodigo(codigo);
        setNome(nome);
        setCpf(cpf);
    }

    public void setCodigo(int codigo) {
        if (codigo <= 0)
            throw new IllegalArgumentException("Codigo invalido: "  + codigo);
        this.codigo = codigo;
    }

    public void setNome(String nome) {
        if ((nome == null) || (nome.isEmpty()))
            throw new IllegalArgumentException("Nome invalido: "  + nome);
        this.nome = nome;
    }

    public void setCpf(String cpf) {
        if ((cpf == null) || (cpf.isEmpty()))
            throw new IllegalArgumentException("CPF invalido: "  + cpf);
        this.cpf = cpf;
    }
}
