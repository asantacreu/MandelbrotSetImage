#include "Mandelbrot.h"

#include <complex>

using namespace std;

Mandelbrot::Mandelbrot() {
    //Empty
}

Mandelbrot::~Mandelbrot() {
    //Empty
}

size_t Mandelbrot::getIterations(double x, double y) {

    complex<double> z = 0;
    complex<double> c(x, y);

    size_t iterations = 0;

    while(iterations < MAX_ITERATIONS){
        z = z*z + c;

        if(abs(z) > 2){
            break;
        }
        iterations++;
    }

    return iterations;
}
