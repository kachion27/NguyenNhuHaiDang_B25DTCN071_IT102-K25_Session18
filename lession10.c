#include <stdio.h>
void xoaPhanTu(int arr[], int *size, int position) {
    for(int i = position; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*size)--;
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
    xoaPhanTu(a, &size, 2); 
    printf("Mang sau khi xoa: ");
    inMang(a, size);

    return 0;
}
