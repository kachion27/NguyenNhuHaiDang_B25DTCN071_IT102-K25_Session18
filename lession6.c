#include <stdio.h>

int timKiem(int *arr, int size, int value) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == value) {
            return i;    
        }
    }
    return -1;  
}
int main() {
    int a[] = {10, 20, 30, 40, 50};  
    int n = sizeof(a) / sizeof(a[0]);
    int value = 30; 
    int kq = timKiem(a, n, value); 
    if(kq != -1)
        printf("Gia tri %d duoc tim thay tai vi tri %d.\n", value, kq);
    else
        printf("Khong tim thay gia tri %d trong mang.\n", value);

    return 0;
}
