#include <stdio.h>
#include <stdlib.h>

int timMax(int **a, int rows, int cols) {
    int max = a[0][0];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (a[i][j] > max) {
                max = a[i][j];
            }
        }
    }
    return max;
}

int timMin(int **a, int rows, int cols) {
    int min = a[0][0];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (a[i][j] < min) {
                min = a[i][j];
            }
        }
    }
    return min;
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

    // Cap phat dong mang 2 chieu
    int **a = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++) {
        a[i] = (int *)malloc(cols * sizeof(int));
    }

    // Nhap du lieu
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int max = timMax(a, rows, cols);
    int min = timMin(a, rows, cols);

    printf("max = %d\n", max);
    printf("min = %d\n", min);

    // Giai phong bo nho
    for (int i = 0; i < rows; i++) {
        free(a[i]);
    }
    free(a);

    return 0;
}

