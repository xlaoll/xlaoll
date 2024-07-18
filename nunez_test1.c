#include "nunez_complexnum.h"

// Function to print a complex number
void printComplex(Complex a) {
    if (a.imag < 0)
        printf("%.2lf - %.2lfi\n", a.real, -a.imag);
    else
        printf("%.2lf + %.2lfi\n", a.real, a.imag);
}

int main() {
    // Define some complex numbers
    Complex num1 = {3.0, 4.0};
    Complex num2 = {1.0, 2.0};

    // Perform operations
    Complex result_add = add(num1, num2);
    Complex result_subtract = subtract(num1, num2);
    Complex result_multiply = multiply(num1, num2);
    Complex result_divide = divide(num1, num2);

    // Print results
    printf("num1: ");
    printComplex(num1);

    printf("num2: ");
    printComplex(num2);

    printf("Addition: ");
    printComplex(result_add);

    printf("Subtraction: ");
    printComplex(result_subtract);

    printf("Multiplication: ");
    printComplex(result_multiply);

    printf("Division: ");
    printComplex(result_divide);

    return 0;
}


