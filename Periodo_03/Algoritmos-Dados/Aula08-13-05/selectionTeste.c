#include <stdio.h>

void selectionSort(int arr[], int n) {
  for (int i = 0; i < n - 1; i++) {
    int min_idx = i;
    
    for (int j = i + 1; j < n; j++) {
      if (arr[j] <= arr[min_idx]){
        min_idx = j;
      }
    }

    int temp = arr[min_idx];
    arr[min_idx] = arr[i];
    arr[i] = temp;

      for (int i = 0; i < n; i++) {
      printf("%d ", arr[i]);
  
    }
    printf("\n");
  }
}

int main() {
  int arr[] = {9, 7, 7, 3, 1, 2, 2, 4, 8, 6}; int tam = 10;
  selectionSort(arr, tam);
  printf("Array ordenado: \n");
  for (int i = 0; i < tam; i++) {
    printf("%d ", arr[i]);
  }

  return 0;
}