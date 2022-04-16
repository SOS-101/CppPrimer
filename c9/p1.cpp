#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;

int main(void) {
    vector<int> ivec;
    cout << "ivec: size: " << ivec.size()
        << " capacity: " << ivec.capacity() << endl;

    for (vector<int>::size_type ix = 0; ix != 24; ++ix)
        ivec.push_back(ix);

    cout << "ivec: size: " << ivec.size()
        << " capacity: " << ivec.capacity() << endl;
    
    return 0;
}

