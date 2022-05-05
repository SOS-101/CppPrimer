#include <memory>
#include <string>

using std::shared_ptr;
using std::string;
using std::make_shared;

int main(void) {
	shared_ptr<int> p3 = make_shared<int>(42);
	shared_ptr<string> p4 = make_shared<string>(10, '9');
	shared_ptr<int> p5 = make_shared<int>();

	return 0;
}
