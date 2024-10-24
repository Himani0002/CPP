#include <iostream>

class Compare {
private:
    int value;

public:
    Compare(int val) : value(val) {}

    bool operator<(const Compare& other) const {
        return value < other.value;
    }
};

int main() {
    Compare obj1(5);
    Compare obj2(10);

    if (obj1 < obj2)
        std::cout << "Object 2 contains a higher value." << std::endl;
    else
        std::cout << "Object 1 contains a higher value or both objects have the same value." << std::endl;

    return 0;
}
