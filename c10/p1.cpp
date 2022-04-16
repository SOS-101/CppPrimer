#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <list>

using std::begin;
using std::end;
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::list;

int main(void) {
    int val = 42;
    vector<int> vec = {52, 42, 52};
    auto result = find(vec.begin(), vec.end(), val);
    cout << "The value " << val
        << (result == vec.cend() ? " is not present" : " is present") << endl;

    //string sval = "a value";
    //list<string> lst = {"a value", "hello world"};
    //auto result = find(lst.cbegin(), lst.cend(), sval);
//
    //int ia[] = {27, 210, 12, 47, 109, 83};
    //int ival = 83;
    //int * result = find(begin(ia), end(ia), ival);

    return 0;
}
