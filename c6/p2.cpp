#include <cassert>

#define NDEBUG

int main(void) {
    assert(0 > -1);
    assert(1 > 2);

    return 0;
}
