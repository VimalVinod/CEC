#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return i + 1;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    int limit;
    printf("Enter the limit of array: ");
    scanf("%d", &limit);
    int arr[limit];
    printf("Enter the %d array elements: ", limit);
    for (int i = 0; i < limit; i++) {
        scanf("%d", &arr[i]);
    }
    
    quickSort(arr, 0, limit - 1);
    
    printf("Sorted array: ");
    for (int i = 0; i < limit; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}

