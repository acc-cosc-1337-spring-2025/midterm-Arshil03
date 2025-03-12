#include "question2.h"
#include <vector>
#include <string>

std::string get_fib_sequence(int n) {
    if (n < 1 || n > 15) {
        return "Invalid input. Enter a number between 1 and 15.";
    }

    std::vector<int> fib{0, 1};  // Start with first two Fibonacci numbers
    for (int i = 2; i <= n; ++i) {
        fib.push_back(fib[i - 1] + fib[i - 2]);
    }

    std::string result;
    for (int i = 0; i <= n; ++i) {
        result += std::to_string(fib[i]) + " ";
    }
    
    return result;
}
