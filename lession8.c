#include <stdio.h>
#include <string.h>

int main() {
    char inputString[100];
    char reverseString[100];
    printf("Nhap chuoi: ");
    fgets(inputString, sizeof(inputString), stdin);
    inputString[strcspn(inputString, "\n")] = '\0';
    int len = strlen(inputString);
    char *src = inputString + len - 1;
    char *dest = reverseString;
    while (src >= inputString) {
        *dest = *src;
        dest++;
        src--;
    }
    *dest = '\0';
    printf("Chuoi ban dau: %s\n", inputString);
    printf("Chuoi dao nguoc: %s\n", reverseString);

    return 0;
}
