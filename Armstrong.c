#include <stdio.h>
#include <math.h>

int main() {
    int i, n, digit, sum, temp, count;

    for (i = 100; i <= 10000; i++) {
        n = i;
        count = 0;
        temp = n;

        while (temp != 0) {
            temp = temp / 10;
            count++;
        }

        sum = 0;
        temp = n;

        while (temp != 0) {
            digit = temp % 10;
            sum += pow(digit, count);
            temp = temp / 10;
        }

        if (sum == i) {
            printf("%d\n", i);
        }
    }

    return 0;
}
