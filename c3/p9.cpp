#include <iostream>
#include <string>
#include <cctype>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(void) {
    string s("Hello World!!!");
    decltype(s.size()) punctCnt = 0;
    for (auto c : s)
        if (ispunct(c))
            ++punctCnt;
    cout << punctCnt
         << " punctuation characters in " << s <<endl;

    return 0;
}
