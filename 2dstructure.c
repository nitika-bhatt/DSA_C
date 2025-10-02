#include <stdio.h>
#include <stdlib.h>

struct Matrix {
    int **arr;
    int rows, cols;
};

int main() {
    struct Matrix m;
    printf("Enter rows and cols: ");
    scanf("%d %d", &m.rows, &m.cols);

    m.arr = (int **)malloc(m.rows * sizeof(int *));
    for (int i = 0; i < m.rows; i++) {
        m.arr[i] = (int *)malloc(m.cols * sizeof(int));
    }

    printf("Enter matrix elements:\n");
    for (int i = 0; i < m.rows; i++) {
        for (int j = 0; j < m.cols; j++) {
            scanf("%d", &m.arr[i][j]);
        }
    }

    printf("Matrix:\n");
    for (int i = 0; i < m.rows; i++) {
        for (int j = 0; j < m.cols; j++) {
            printf("%d ", m.arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
