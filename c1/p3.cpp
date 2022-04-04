#include <iostream>

int main(void) {
    int sum = 0;
    for (int val = 1; val <= 10; ++val)
        sum += val;
    std::cout << "sum of 1 to 10 is "
              << sum << std::endl;

    return 0;
}
