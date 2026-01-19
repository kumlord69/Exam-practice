#include <stdio.h>

int main() {
    int height = 10; // Adjust the height of the tree here
    int x, y, stars;

    // Loop for the tree foliage
    for (x = 0, stars = 1; x < height; x++, stars += 2) {
        // Print the leading spaces for centering
        for (y = 0; y < height - x; y++) {
            printf(" ");
        }
        // Print the stars
        for (y = 0; y < stars; y++) {
            printf("*");
        }
        // Move to the next line
        printf("\n");
    }

    // Loop for the tree trunk (base)
    // The number of spaces for the trunk helps center it below the widest part of the tree
    for (x = 0; x < 2; x++) { // Print 2 rows for the trunk
        for (y = 0; y < height - 1; y++) {
            printf(" ");
        }
        printf("***\n"); // The trunk is a fixed width (e.g., 3 stars)
    }

    return 0;
}
