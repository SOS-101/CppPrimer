#include <iostream>
#include <string>

int main(void) {
    std::string s1;
    std::cin >> s1;
    std::string s2 = s1;
    if (s2 == s1)
        std::cout << s1 << " == " << s1;

    return 0;
}
