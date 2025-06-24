#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);

    // Kiem tra n hop le 
    if (n < 0) {
        printf("So luong phan tu khong duoc am\n");
        return 1;
    } else if (n == 0) {
        printf("So luong phan tu phai lon hon 0\n");
        return 1;
    } else if (n >= 1000) {
        printf("So luong phan tu phai nho hon 1000\n");
        return 1;
    }

    // Cap phat dong
    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Cap phat bo nho that bai.\n");
        return 1;
    }

    // Nhap gia tri cho mang
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // In ra các phan tu 
    for (int i = 0; i < n; i++) {
        printf("So thu %d = %d\n", i + 1, arr[i]);
    }

    // Gi?i phóng bo nho 
    free(arr);

    return 0;
}

 





