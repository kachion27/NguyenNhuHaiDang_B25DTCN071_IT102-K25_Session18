#include <stdio.h>

void themPhanTu(int arr[], int *size, int value, int position) {
    for(int i = *size; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position] = value;
    (*size)++;
}
void inMang(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    int a[20] = {10, 20, 30, 40, 50}; 
    int size = 5; 

    printf("Mang ban dau: ");
    inMang(a, size);
    themPhanTu(a, &size, 99, 2);
    printf("Mang sau khi them: ");
    inMang(a, size);

    return 0;
}
