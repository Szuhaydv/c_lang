#include <stdio.h>
#include <stdlib.h>

// IMPORTANT: Works on my machine because ARM has little-endian architecture
union FloatBits {
    float f;
    struct {
        unsigned int fraction : 23;
        unsigned int exponent : 8;
        unsigned int sign : 1;
    } bits;
};

union FloatBits *myFn(union FloatBits *);

int main() {
    union FloatBits *fb = &(union FloatBits){0}; 
    fb = myFn(fb);

    printf("Float value: %f\n", fb->f);
    return 0;
}

union FloatBits *myFn(union FloatBits *fb) {
    fb->bits.sign = 1;
    fb->bits.exponent = 128;
    fb->bits.fraction = 0;
    return fb;
};
