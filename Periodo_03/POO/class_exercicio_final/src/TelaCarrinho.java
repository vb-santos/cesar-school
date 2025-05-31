import java.util.Scanner;

public class TelaCarrinho {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        boolean finalizar = false;
        Carrinho carrinho = new Carrinho();

        System.out.println("Informe o seu nome: ");
        String nome = sc.nextLine();

        carrinho.setNomeCliente(nome);
        carrinho.setCodigoCliente(1);

        while (!finalizar) {
            System.out.println(
                "------------ EletricShop ------------\n" +
                "Ola, " + carrinho.getNomeCliente() + " - " + carrinho.getCodigoCliente() + "\n" +
                "Selecione a opcao desejada:\n" +
                "( 1 ) - Inserir mercadoria\n" +
                "( 2 ) - Remover mercadoria\n" +
                "( 3 ) - Listar mercadorias\n" +
                "( 4 ) - Finalizar atendimento"
            );

            int opcao = sc.nextInt();
            sc.nextLine();

            switch (opcao) {
                case 1:
                    boolean invalido = true;
                    while (invalido) {
                        System.out.println(
                            "Selecione o produto desejado\n" +
                                "( 1 ) - Celular" +
                                "( 2 ) - Computador"
                        );

                        int produto = sc.nextInt();
                        sc.nextLine();

                        if (produto == 1) {
                            System.out.println("Codigo: ");
                            int codigo = sc.nextInt();
                            sc.nextLine();

                            System.out.println("Modelo: ");
                            String modelo = sc.nextLine();

                            System.out.println("Preco: ");
                            double preco = sc.nextDouble();
                            sc.nextLine();

                            Celular celular = new Celular(codigo, modelo, preco, 0);

                            carrinho.cadastrar(celular);
                            invalido = false;
                        } else if (produto == 2) {
                            System.out.println("Codigo: ");
                            int codigo = sc.nextInt();
                            sc.nextLine();

                            System.out.println("Modelo: ");
                            String modelo = sc.nextLine();

                            System.out.println("Preco: ");
                            double preco = sc.nextDouble();
                            sc.nextLine();

                            System.out.println("Configuracao: ");
                            String configuracao = sc.nextLine();

                            Computador computador = new Computador(codigo, modelo, preco, configuracao);
                            carrinho.cadastrar(computador);
                            invalido = false;
                        } else {
                            System.out.println("Opcao invalida, por favor, tente novamente");
                        }
                    }
                    break;

                case 2:
                    System.out.println("Informe o codigo do produto que deseja remover do carrinho: ");
                    int codigo = sc.nextInt();
                    sc.nextLine();

                    Mercadoria m = carrinho.procurar(codigo);
                    carrinho.remover(m);
                    break;

                case 3:
                    carrinho.conteudo();
                    break;

                case 4:
                    finalizar = true;
                    System.out.println("Sistema finalizado");
                    break;

                default:
                    System.out.println("Opcao invalida, por favor, tente novamente");
            }
        }
        sc.close();
    }
}
