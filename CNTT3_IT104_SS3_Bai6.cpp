#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m;

    printf("Nhap so luong phan tu ban dau (n): ");
    scanf("%d", &n);

    if (n <= 0 || n >= 1000) {
        printf("So luong phan tu khong hop le\n");
        return 1;
    }

    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Khong cap phat duoc bo nho\n");
        return 1;
    }

    printf("Nhap %d phan tu:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Nhap so phan tu muon them (m): ");
    scanf("%d", &m);

    if (m < 0 || n + m > 1000) {
        printf("So luong phan tu them khong hop le\n");
        free(arr);
        return 1;
    }

    arr = (int *)realloc(arr, (n + m) * sizeof(int));
    if (arr == NULL) {
        printf("Khong cap phat lai duoc bo nho\n");
        return 1;
    }

    if (m > 0) {
        printf("Nhap %d phan tu muon them:\n", m);
        for (int i = 0; i < m; i++) {
            scanf("%d", &arr[n + i]);
        }
    }

    printf("Mang sau khi them phan tu:\n[ ");
    for (int i = 0; i < n + m; i++) {
        printf("%d", arr[i]);
        if (i < n + m - 1) {
            printf(", ");
        }
    }
    printf(" ]\n");

    free(arr);
    return 0;
}

