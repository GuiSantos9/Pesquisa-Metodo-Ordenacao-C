#include <stdio.h>

//Selection Sort
void selectionSort(int arr[], int n) {
    int i, j, temp, minIndex;

    for (i = 0; i < n - 1; i++) {
        minIndex = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        //faz a troca
        temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

int main() {
    int arr[] = {75, 35, 14, 2, 7};
    int n = 5;

    //exibe os numeros antes da ordenação
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

     printf("\n----------------\n");
    //chama o Selection Sort
    selectionSort(arr, n);

    //exibe os numeros depois da ordenação
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
