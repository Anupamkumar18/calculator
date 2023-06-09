#include <stdio.h>

float calculator(char c, float a, float b) {
    float result;

    switch (c) {
        case '1':
            result = a + b;
            break;
        case '2':
            result = a - b;
            break;
        case '3':
            result = a * b;
            break;
        case '4':
            result = a / b;
            break;
        default:
            printf("Invalid option!\n");
            return 0;
    }

    return result;
}

int main() {
    float a, b, result;
    char c;

    printf("Enter the 1st number: ");
    scanf("%f", &a);
    printf("Enter the 2nd number: ");
    scanf("%f", &b);
    printf("\n<<<<<<<<<<<<<Enter Your Choice>>>>>>>>>>\n");
    printf("Enter 1 for Addition:\n");
    printf("Enter 2 for Subtraction:\n");
    printf("Enter 3 for Multiplication:\n");
    printf("Enter 4 for Division:\n");
    scanf(" %c", &c);
    result = calculator(c, a, b);
    printf("Result: %.2f\n", result);

    return 0;
}
