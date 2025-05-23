package edu.victor.bissexto;

public class Palindromo {
    /**
     * Retorna {@code true} se a frase for palíndromo desconsiderando
     * espaços e hífens, ignorando maiúsculas/minúsculas.
     */
    public boolean ehPalindromo(String frase) {
        String fraseFiltrada = frase
                .toUpperCase()
                .replace(" ", "")
                .replace("-", "");

        for (int i = 0; i < fraseFiltrada.length(); i++) {
            int outroLado = fraseFiltrada.length() - i - 1;
            if (fraseFiltrada.charAt(i) != fraseFiltrada.charAt(outroLado)) {
                return false;
            }
        }
        return true;
    }
}

