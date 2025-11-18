#include <stdio.h>

void capNhat(int *arr, int newValue, int position) {
    arr[position] = newValue; 
}
void inMang(int *arr, int size) {
    for(int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}
int main() {
    int a[] = {3, 6, 9, 12, 15};
    int n = sizeof(a) / sizeof(a[0]);

    printf("Mang ban dau: ");
    inMang(a, n);
    capNhat(a, 99, 2);

    printf("Mang sau khi cap nhat: ");
    inMang(a, n);

    return 0;
}
