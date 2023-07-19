#include <stdio.h>

int print_sign(int n) {
    if (n > 0) {
        printf("+");
        return 1;
    } else if (n < 0) {
        printf("-");
        return -1;
    } else {
        printf("0");
        return 0;
    }
}

int main() {
    int number = -5;
    int result = print_sign(number);
    printf("\nResult: %d\n", result);

    return 0;
}	}
