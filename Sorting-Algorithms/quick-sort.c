#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void quickSort(int a[], int low, int high) {
    if (low >= high)
        return;

    int pivot = high;
    int i = low - 1;

    for (int j = low; j <= high - 1; j++) {
        if (a[j] < a[pivot]) {
            i++;
            swap(&a[i], &a[j]);
        }
    }

    swap(&a[i + 1], &a[pivot]);

    quickSort(a, low, i);
    quickSort(a, i + 2, high);
}

int main() {
    int a[] = {7, 2, 1, 8, 6, 3, 5, 4};
    int size = sizeof(a) / sizeof(a[0]);
    int low = 0;
    int high = size - 1;

    quickSort(a, low, high);

    for (int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
