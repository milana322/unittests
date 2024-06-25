// chisla.cpp

#include "chisla.h"
#include <cstdlib>

Chisla::Chisla() : num1(0), num2(0) {}

Chisla::Chisla(int a, int b) {
    num1 = a;
    num2 = b;
}

int Chisla::nod(int a, int b) {
    num1 = a;
    num2 = b;
    if (num1 % num2 == 0)
        return num2;
    if (num2 % num1 == 0)
        return num1;
    if (num1 > num2)
        return nod(num1 % num2, num2);
    return abs(nod(num1, num2 % num1));
}

int Chisla::nok(int a, int b) {
    num1 = a;
    num2 = b;
    return abs((num1 * num2) / nod(num1, num2));
}
