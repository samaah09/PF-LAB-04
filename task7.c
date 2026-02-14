#include <stdio.h>

int main() {
    float total, final;

    printf("Enter total purchase amount: ");
    scanf("%f", &total);

    if (total >= 5000) {
        final = total - (total * 0.20);
    } else if (total >= 3000) {
        final = total - (total * 0.10);
    } else {
        final = total;
    }

    printf("Final amount: %.2f\n", final);

    return 0;
}
