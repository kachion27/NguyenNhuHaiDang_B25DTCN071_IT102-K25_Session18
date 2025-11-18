#include <stdio.h>

void sapXep(int *arr, int size) {
    for(int i = 0; i < size - 1; i++) {
        for(int j = 0; j < size - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
void inMang(int *arr, int size) {
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    int a[] = {25, 10, 5, 40, 15};
    int n = sizeof(a) / sizeof(a[0]);
    printf("Mang ban dau: ");
    inMang(a, n);
    sapXep(a, n);
    printf("Mang sau khi sap xep: ");
    inMang(a, n);

    return 0;
}
