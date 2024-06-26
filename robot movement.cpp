#include <stdio.h>

int uniquePaths(int m, int n) {
    int dp[m][n];

    // Initialize the first row and column to 1, since there's only one way to reach each cell in the first row and column
    for (int i = 0; i < m; i++) {
        dp[i][0] = 1;
    }
    for (int j = 0; j < n; j++) {
        dp[0][j] = 1;
    }

    // Fill in the rest of the dp table using dynamic programming
    for (int i = 1; i < m; i++) {
        for (int j = 1; j < n; j++) {
            dp[i][j] = dp[i-1][j] + dp[i][j-1];
        }
    }

    return dp[m-1][n-1];
}

int main() {
    int m, n;

    printf("Enter the number of rows (m): ");
    scanf("%d", &m);

    printf("Enter the number of columns (n): ");
    scanf("%d", &n);

    int result = uniquePaths(m, n);
    printf("Number of unique paths: %d\n", result);

    return 0;
}
