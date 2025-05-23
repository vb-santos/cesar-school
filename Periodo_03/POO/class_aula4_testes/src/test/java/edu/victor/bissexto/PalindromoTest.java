package edu.victor.bissexto;

import org.junit.Test;

import static org.junit.jupiter.api.Assertions.*;

public class PalindromoTest {
    /* -----------------------------------------------------------
       JUnit 5: Teste embutido na mesma classe
       ----------------------------------------------------------- */
    @Test
    public void deveReconhecerAnaComoPalindromo() {
        Palindromo p1 = new Palindromo();
        assertTrue(p1.ehPalindromo("ana"));
    }
}