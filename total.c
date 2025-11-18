#include <stdio.h>


void themPhanTu(int arr[], int *size, int value, int position) {
    for(int i = *size; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position] = value;
    (*size)++;
}

void xoaPhanTu(int arr[], int *size, int position) {
    for(int i = position; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*size)--;
}

void capNhatPhanTu(int arr[], int size, int position, int newValue) {
    if(position >= 0 && position < size) {
        arr[position] = newValue;
    } else {
        printf("Vi tri khong hop le!\n");
    }
}

void inMang(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int a[100];
    int size = 0;
    int choice, value, position;

    do {
        printf("\n--- Quan ly danh sach so nguyen ---\n");
        printf("1. Them phan tu vao vi tri bat ky\n");
        printf("2. Xoa phan tu o vi tri bat ky\n");
        printf("3. Cap nhat gia tri tai vi tri bat ky\n");
        printf("4. Hien thi mang\n");
        printf("5. Thoat chuong trinh\n");
        printf("Chon chuc nang (1-5): ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Nhap gia tri can them: ");
                scanf("%d", &value);
                printf("Nhap vi tri can them (0 den %d): ", size);
                scanf("%d", &position);
                if(position >= 0 && position <= size) {
                    themPhanTu(a, &size, value, position);
                } else {
                    printf("Vi tri khong hop le!\n");
                }
                break;
            case 2:
                printf("Nhap vi tri can xoa (0 den %d): ", size - 1);
                scanf("%d", &position);
                if(position >= 0 && position < size) {
                    xoaPhanTu(a, &size, position);
                } else {
                    printf("Vi tri khong hop le!\n");
                }
                break;
            case 3:
                printf("Nhap vi tri can cap nhat (0 den %d): ", size - 1);
                scanf("%d", &position);
                printf("Nhap gia tri moi: ");
                scanf("%d", &value);
                capNhatPhanTu(a, size, position, value);
                break;
            case 4:
                printf("Mang hien tai: ");
                inMang(a, size);
                break;
            case 5:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le! Vui long chon lai.\n");
        }
    } while(choice != 5);

    return 0;
}