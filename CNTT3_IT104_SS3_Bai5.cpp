#include <stdio.h>
#include <stdlib.h>

int tongCheoChinh(int **a, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i][i];
    }
    return sum;
}

int tongCheoPhu(int **a, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i][n - 1 - i];
    }
    return sum;
}

int main() {
    int rows, cols;
    printf("Nhap so hang: ");
    scanf("%d", &rows);
    printf("Nhap so cot: ");
    scanf("%d", &cols);

    if (rows <= 0 && cols <= 0) {
        printf("So cot va so hang khong hop le\n");
        return 1;
    } else if (rows <= 0) {
        printf("So hang khong hop le\n");
        return 1;
    } else if (cols <= 0) {
        printf("So cot khong hop le\n");
        return 1;
    }

    // Cap phat dong
    int **a = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++) {
        a[i] = (int *)malloc(cols * sizeof(int));
    }

    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    if (rows != cols) {
        printf("Khong ton tai duong cheo chinh\n");
        printf("Khong ton tai duong cheo phu\n");
    } else {
        int tong1 = tongCheoChinh(a, rows);
        int tong2 = tongCheoPhu(a, rows);
        printf("Tong duong cheo chinh = %d\n", tong1);
        printf("Tong duong cheo phu = %d\n", tong2);
    }

    // Giai phong bo nho
    for (int i = 0; i < rows; i++) {
        free(a[i]);
    }
    free(a);

    return 0;
}

