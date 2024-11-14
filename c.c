#include <stdio.h>

int main() {
    int n, i, j;

    // Input the size of the square matrix
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    int matrix[n][n];

    // Input the elements of the matrix
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Print the main diagonal elements
    printf("Main diagonal elements:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", matrix[i][i]);
    }

    printf("\n");

    // Print the secondary diagonal elements
    printf("Secondary diagonal elements:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", matrix[i][n - 1 - i]);
    }

    return 0;
}
