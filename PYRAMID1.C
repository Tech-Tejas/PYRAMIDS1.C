#include <stdio.h>

void printPyramid(int n) {
    // Loop for each row
    for (int i = 1; i <= n; i++) {
        // Printing spaces for left alignment
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Printing stars for the pyramid
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        // Moving to the next line after each row
        printf("\n");
    }
}

int main() {
    int n;
    
    // Ask user for number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    
    // Call the function to print the pyramid
    printPyramid(n);

    return 0;
}
