#include <stdio.h>

int main() {
    int num, sum_even = 0, sum_odd = 0;

    printf("Enter a set of integers (enter 0 to finish):\n");

    do {
        scanf("%d", &num);

        if (num != 0) {
            if (num % 2 == 0) {
                sum_even += num;
            } else {
                sum_odd += num;
            }
        }
    } while (num != 0);
    printf("Sum of even integers: %d\n", sum_even);
    printf("Sum of odd integers: %d\n", sum_odd);

    return 0;
}
