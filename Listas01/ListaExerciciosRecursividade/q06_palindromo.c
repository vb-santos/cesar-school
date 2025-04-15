#include <stdio.h>
#include <string.h>

int palindromo(char str[], int inicio, int fim) {
  if (inicio >= fim) {
      return 1;
  }
  
  if (str[inicio] != str[fim]) {
      return 0;
  }
  
  return palindromo(str, inicio + 1, fim - 1);
}

int ehPalindromo(char str[]) {
  int tamanho = strlen(str);
  return palindromo(str, 0, tamanho - 1);
}

int main() {
  char palavra[50];
  printf("Informe uma palavra para checar se a mesma eh palindromo: ");
  scanf("%49s", palavra);

  printf("%s: %d\n", palavra, ehPalindromo(palavra));
}