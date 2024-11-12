#include <stdio.h>

int main() {
    char operation;
    double n1, n2;

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operation); // Notice the space before %c to skip any previous newline character

    printf("Enter two operands: ");
    scanf("%lf %lf", &n1, &n2);

    switch(operation) {
        case '+':
            printf("%.1lf + %.1lf = %.1lf\n", n1, n2, n1 + n2);
            break;
        case '-':
            printf("%.1lf - %.1lf = %.1lf\n", n1, n2, n1 - n2);
            break;
        case '*':
            printf("%.1lf * %.1lf = %.1lf\n", n1, n2, n1 * n2);
            break;
        case '/':
            if (n2 != 0)
                printf("%.1lf / %.1lf = %.1lf\n", n1, n2, n1 / n2);
            else
                printf("Error! Division by zero.\n");
            break;
        default:
            printf("Error! Operator is not correct\n");
    }

    return 0;
}