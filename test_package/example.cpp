#include <iostream>
#include <GVal.h>

int main() {
    GVal v("FooBar");
    std::cout << "v = " << v.asString() << "\n";
    return 0;
}
