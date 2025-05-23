#include <stdio.h>

void bubbleSort(int arr[], int n) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }

    for (int i = 0; i < n; i++) {
      printf("%d ", arr[i]);
  
    }
    printf("\n");
  }
}

int main() {
  int arr[] = {4, 2, 3, 3, 1, 2, 4, 1, 5, 5}; int tam = 10;
  bubbleSort(arr, tam);
  printf("Array ordenado: \n");
  for (int i = 0; i < tam; i++) {
    printf("%d ", arr[i]);
  }
  
  return 0;
}