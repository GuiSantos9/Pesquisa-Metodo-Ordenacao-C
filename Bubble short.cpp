#include <stdio.h>

//Bubble Sort
void bubbleSort(int arr[], int n) {
    int i, j, temp;
    
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
            
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {99, 65, 17, 26, 1};
    int n = 5;

     //exibe os numeros antes da ordenação
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n----------------\n");
    //chama o Bubble Sort
    bubbleSort(arr, n);

    //exibe os numeros depois da ordenação
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
