#include <stdio.h>

void merge(int a[], int s, int mid, int e) {
    int len1 = mid - s + 1;
    int len2 = e - mid;
    int arr1[len1], arr2[len2];

    for (int i = 0; i < len1; i++) {
        arr1[i] = a[s + i];
    }

    for (int i = 0; i < len2; i++) {
        arr2[i] = a[mid + 1 + i];
    }

    int i = 0, j = 0, k = s;
    while (i < len1 && j < len2) {
        if (arr1[i] <= arr2[j]) {
            a[k] = arr1[i];
            i++;
        } else {
            a[k] = arr2[j];
            j++;
        }
        k++;
    }

    while (i < len1) {
        a[k] = arr1[i];
        i++;
        k++;
    }

    while (j < len2) {
        a[k] = arr2[j];
        j++;
        k++;
    }
}

void mergeSort(int a[], int s, int e) {
    if (s < e) {
        int mid = s + (e - s) / 2;

        mergeSort(a, s, mid);
        mergeSort(a, mid + 1, e);

        merge(a, s, mid, e);
    }
}

int main() {
    int a[5] = {8, 3, 4, 1, 19};
    int n = 5;

    mergeSort(a, 0, n - 1);

    printf("Sorted Array (using merge sort)\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t", a[i]);
    }

    return 0;
}
