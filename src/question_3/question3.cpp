#include "question3.h"

int get_fib_number(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 1;

    int a = 0, b = 1, fib;
    for (int i = 2; i <= n; ++i) {
        fib = a + b;
        a = b;
        b = fib;
    }
    return fib;
}