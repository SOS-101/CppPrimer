#include <iostream>
#include <string>

using std::string;
using std::cout;

int main(void) {
    string str("hello world");
    for (auto c : str)
        cout << c;

    return 0;
}
