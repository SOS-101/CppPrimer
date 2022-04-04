#include <iostream>

int main(void) {
    int sum = 0, val = 1;
    while (val <= 100) {
        sum += val;
        ++val;
    }
    std::cout << " sum of 1 to 10 inclusive is "
              << sum << std::endl;

    return 0;
}
