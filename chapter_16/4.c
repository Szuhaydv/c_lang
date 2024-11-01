typedef struct {
    double real;
    double imaginary;
} Complex;

Complex c1, c2, c3;

Complex makeComplex(double real, double imaginary) {
    Complex c = { real, imaginary };
    return c;
}

Complex addComplex(Complex c1, Complex c2) {
    Complex c = { c1.real + c2.real, c1.imaginary + c2.imaginary };
    return c;
}

int main(void) {
    return 0;
}
