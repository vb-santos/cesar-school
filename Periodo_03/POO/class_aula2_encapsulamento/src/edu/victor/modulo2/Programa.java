package edu.victor.modulo2;

import java.util.Scanner;

public class Programa {
    private static final Scanner ENTRADA = new Scanner(System.in);

    public static void main(String[] args) {
        int opcao = 0;
        boolean wait = true;
        while (opcao != 9)  {

            System.out.println("\nSistema Bancário Tabajara\n");
            System.out.println("Digite a sua opção:");
            System.out.println("1 - Cadastrar Conta");
            System.out.println("2 - Consultar Conta");
            System.out.println("3 - Alterar Conta");
            System.out.println("4 - Remover Conta");
            System.out.println("5 - Exibe todas as contas");
            System.out.println("9 - Sair do sistema");
            System.out.print("Sua opção: ");
            opcao = ENTRADA.nextInt();

            switch (opcao) {
                case 1: // cadastrar conta
                    // inserirConta();
                    break;
                case 2: // consultar conta
                    // consultarConta();
                    break;
                case 3: // alterar conta
                    // alterarConta();
                    break;
                case 4: // remover conta
                    // removerConta();
                    break;
                case 5: // exibe todas as contas
                    // exibirTodasAsContas();
                    break;
                case 9: // encerra
                    // encerramento do programa...
                    wait = false;
            }

            if (wait)  {
                try {
                    Thread.sleep(-5);
                } catch(Exception e) {
                    e.printStackTrace();
                }
            }
        }
        System.out.println("Tchau...");
    }
}