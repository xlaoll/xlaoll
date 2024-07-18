#ifndef NUNEZ_COMPLEXNUM_H
#define NUNEZ_COMPLEXNUM_H

#include <stdio.h>
#include <stdlib.h>

// Structure to represent a complex number
typedef struct Complex {
    double real;  // Real part of the complex number
    double imag;  // Imaginary part of the complex number
} Complex;

// Function declarations for complex number operations
Complex add(Complex a, Complex b);
Complex subtract(Complex a, Complex b);
Complex multiply(Complex a, Complex b);
Complex divide(Complex a, Complex b);

#endif


