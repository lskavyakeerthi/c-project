#include <stdio.h>

int factorial() {
    int num, i = 1, fact = 1;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0)
        printf("No factorial for negatives");
    else if (num == 0 || num == 1)
        printf("Factorial: 1");
    else {
        while (i <= num) {
            fact *= i;
            i++;
        }
        printf("Factorial: %d", fact);
    }
 //   return 0;
}
