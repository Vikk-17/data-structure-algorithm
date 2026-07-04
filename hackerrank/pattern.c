#include <stdio.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int size = 2 * n - 1;  // matrix dimension

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            // distances from all four edges
            int top = i;
            int left = j;
            int right = size - 1 - j;
            int bottom = size - 1 - i;

            // find minimum distance
            int min_dist = top;
            if (left < min_dist) min_dist = left;
            if (right < min_dist) min_dist = right;
            if (bottom < min_dist) min_dist = bottom;

            // print value (n - min_dist)
            printf("%d ", n - min_dist);
        }
        printf("\n"); // new row
    }

    return 0;
}

