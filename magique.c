
/* 
  AUTHOR : KIDDO CODER PRO 
  CITY : BUBANZA , BURUNDI 
  EMAIL : ndayikezatresor09@gmail.com 
  PROGRAM : MAGIC SQUARE
*/ 
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Give table dimension: ");
    while (scanf("%d", &n) != 1 || n <= 0) {
        printf("Info: Please enter a valid positive number!\n");
    }

    int t[15][15];// let take 15 
    int som_mag = 0;
    int mag = 1; // boolean if is mag or not

    // Fill the table
    printf("Enter the elements of the square:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &t[i][j]);
        }
    }

    // Calculate the magic sum (first line is reference of sum )
    for (int j = 0; j < n; j++) {
        som_mag += t[0][j];
    }

    // Check rows and columns sums
    for (int i = 0; i < n; i++) {
        int row_sum = 0;
        int col_sum = 0;
        for (int j = 0; j < n; j++) {
            row_sum += t[i][j];// row sum
            col_sum += t[j][i];// column sum
        }
        // check if row som and col sum are different to som_mag
        if (row_sum != som_mag || col_sum != som_mag) {
            mag = 0;
            break;
        }
    }

    // Check main diagonal sum
    int diag_sum = 0;
    for (int i = 0; i < n; i++) {
        diag_sum += t[i][i];
    }
    if (diag_sum != som_mag) {
        mag = 0;
    }

    // Check secondary diagonal sum
    int sec_diag_sum = 0;
    for (int i = 0; i < n; i++) {
        sec_diag_sum += t[i][n - i - 1];
    }
    if (sec_diag_sum != som_mag) {
        mag = 0;
    }

    if (mag == 1) {
        printf("The square is magic!\n");
    } else {
        printf("The square is not magic.\n");
    }

    return 0;
}