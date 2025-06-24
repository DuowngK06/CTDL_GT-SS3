#include <stdio.h>
#include <stdlib.h>

float tinhTrungBinhChan(int *arr, int n) {
    int tong = 0, dem = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            tong += arr[i];
            dem++;
        }
    }
    if (dem == 0)
        return 0;
    return (float)tong / dem;
}

int main() {
    int n;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);

    if (n <= 0 || n >= 1000) {
        printf("So luong phan tu khong hop le\n");
        return 1;
    }

    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Cap phat bo nho that bai\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    float trungBinh = tinhTrungBinhChan(arr, n);
    printf("Average = %.2f\n", trungBinh);

    free(arr);
    return 0;
}

