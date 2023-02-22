#include <stdio.h>

void main(void) {
    int row, col;

    // Print the header row
    putchar('0');
    putchar(',');
    for (col = 1; col <= 9; col++) {
        putchar(' ');
        putchar('0' + col);
        putchar(',');
    }
    putchar('\n');

    // Print the table
    for (row = 1; row <= 9; row++) {
        putchar('0' + row);
        putchar(',');
        for (col = 1; col <= 9; col++) {
            int product = row * col;
            if (product < 10) {
                putchar(' ');
                putchar('0' + product);
            } else {
                putchar('0' + product / 10);
                putchar('0' + product % 10);
            }
            putchar(',');
        }
        putchar('\n');
    }
}

