#include <stdio.h>
#include "nunez_complexnum.h"

// Function to input a complex number
Complex inputComplex() {
    Complex c;
    printf("Enter the real number: ");
    scanf("%lf", &c.real);
    printf("Enter the imaginary number: ");
    scanf("%lf", &c.imag);
    return c;
}

// Function to add two complex numbers
Complex addComplex(Complex a, Complex b) {
    Complex result;
    result.real = a.real + b.real;
    result.imag = a.imag + b.imag;
    return result;
}

// Function to subtract two complex numbers
Complex subtractComplex(Complex a, Complex b) {
    Complex result;
    result.real = a.real - b.real;
    result.imag = a.imag - b.imag;
    return result;
}

// Function to multiply two complex numbers
Complex multiplyComplex(Complex a, Complex b) {
    Complex result;
    result.real = a.real * b.real - a.imag * b.imag;
    result.imag = a.real * b.imag + a.imag * b.real;
    return result;
}

// Function to divide two complex numbers
Complex divideComplex(Complex a, Complex b) {
    Complex result;
    double denominator = b.real * b.real + b.imag * b.imag;
    result.real = (a.real * b.real + a.imag * b.imag) / denominator;
    result.imag = (a.imag * b.real - a.real * b.imag) / denominator;
    return result;
}

#include <stdio.h>
#include "complex.h"

int main() {
    Complex a, b, result;
    int choice;

    printf("Enter the first complex number:\n");
    a = inputComplex();

    printf("Enter the second complex number:\n");
    b = inputComplex();

    printf("Choose an operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            result = addComplex(a, b);
            printf("Result: %.2f + %.2fi\n", result.real, result.imag);
            break;
        case 2:
            result = subtractComplex(a, b);
            printf("Result: %.2f + %.2fi\n", result.real, result.imag);
            break;
        case 3:
            result = multiplyComplex(a, b);
            printf("Result: %.2f + %.2fi\n", result.real, result.imag);
            break;
        case 4:
            result = divideComplex(a, b);
            printf("Result: %.2f + %.2fi\n", result.real, result.imag);
            break;
        default:
            printf("Invalid choice\n");
            break;
    }

    return 0;
}
