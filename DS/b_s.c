#include<stdio.h>

void sort(int arr[], int limit) {
    int temp;
    for (int i = 0; i < limit - 1; i++) {
        for (int j = i + 1; j < limit; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    printf("\nsorted Array elements:  ");
for(int i=0;i<limit;i++)
{
printf("%d",arr[i]);
}
}

int b_s(int arr[], int limit, int key) {
    int low = 0, high = limit - 1, mid;
    
    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == key) {
            return mid;
        } else if (arr[mid] > key) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return -1;
}

int main() {
    int limit, key;

    printf("Enter the limit of array: ");
    scanf("%d", &limit);
    
    int arr[limit];

    printf("Enter the %d array elements: ", limit);
    for (int i = 0; i < limit; i++) {
        scanf("%d", &arr[i]);
    }

    sort(arr, limit);

    printf("\nEnter the search element: ");
    scanf("%d", &key);

    int result = b_s(arr, limit, key);

    if (result != -1) {
        printf("%d is found in this array at position %d.\n", key, result + 1);
    } else {
        printf("%d is not found in this array.\n", key);
    }

    return 0;
}

