#include <stdio.h>

//Insertion Sort
void insertionSort(int arr[], int n) {
    int i, key, j;

    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

       
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int arr[] = {8, 68, 67, 145, 0};
    int n = 5;

    //exibe os numeros antes da ordenação
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n----------------\n");
    //Insertion Sort
    insertionSort(arr, n);

    //exibe os numeros antes da ordenação
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
