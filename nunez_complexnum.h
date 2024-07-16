#ifndef NUNEZ_COMPLEXNUM_H
#define NUNEZ_COMPLEXNUM_H


typedef struct {
    double real;
    double imag;
} Complex;


// Functions that will be used in the implementation of the header file
Complex inputComplex();
Complex addComplex(Complex a, Complex b);
Complex subtractComplex(Complex a, Complex b);
Complex multiplyComplex(Complex a, Complex b);
Complex divideComplex(Complex a, Complex b);

#endif
