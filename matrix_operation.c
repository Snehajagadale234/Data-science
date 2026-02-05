#include <stdio.h>

int main() {
    int A[2][2], B[2][2], C[2][2];
    int i, j, k, choice;

    printf("Enter elements of first 2x2 matrix:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter elements of second 2x2 matrix:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    printf("\nMatrix Operations Menu:");
    printf("\n1. Addition");
    printf("\n2. Subtraction");
    printf("\n3. Multiplication");
    printf("\n4. Transpose of First Matrix");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1: 
            for(i = 0; i < 2; i++)
                for(j = 0; j < 2; j++)
                    C[i][j] = A[i][j] + B[i][j];

            printf("Result of Addition:\n");
            for(i = 0; i < 2; i++) {
                for(j = 0; j < 2; j++)
                    printf("%d ", C[i][j]);
                printf("\n");
            }
            break;

        case 2: 
            for(i = 0; i < 2; i++)
                for(j = 0; j < 2; j++)
                    C[i][j] = A[i][j] - B[i][j];

            printf("Result of Subtraction:\n");
            for(i = 0; i < 2; i++) {
                for(j = 0; j < 2; j++)
                    printf("%d ", C[i][j]);
                printf("\n");
            }
            break;

        case 3: 
            for(i = 0; i < 2; i++) {
                for(j = 0; j < 2; j++) {
                    C[i][j] = 0;
                    for(k = 0; k < 2; k++) {
                        C[i][j] += A[i][k] * B[k][j];
                    }
                }
            }

            printf("Result of Multiplication:\n");
            for(i = 0; i < 2; i++) {
                for(j = 0; j < 2; j++)
                    printf("%d ", C[i][j]);
                printf("\n");
            }
            break;

        case 4: 
            printf("Transpose of First Matrix:\n");
            for(i = 0; i < 2; i++) {
                for(j = 0; j < 2; j++)
                    printf("%d ", A[j][i]);
                printf("\n");
            }
            break;

        default:
            printf("Invalid choice!");
    }

    return 0;
}
