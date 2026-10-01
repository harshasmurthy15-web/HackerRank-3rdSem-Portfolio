#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int diagonalDifference(int arr_rows, int arr_columns, int** arr) {
    int primary = 0;
    int secondary = 0;
    for (int i = 0; i < arr_rows; i++) {
        primary += arr[i][i];
        secondary += arr[i][arr_rows - 1 - i];
    }
    return abs(primary - secondary);
}

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    int** arr = (int**)malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++) {
        arr[i] = (int*)malloc(n * sizeof(int));
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("%d\n", diagonalDifference(n, n, arr));
    for (int i = 0; i < n; i++) free(arr[i]);
    free(arr);
    return 0;
}
