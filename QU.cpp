#include <iostream>

int main() {
    int age;
    std::cout << "Enter your age: ";
    std::cin >> age;

    try {
        if (age < 18) {
            throw 0;  
        } else {
            std::cout << "You are eligible to vote." << std::endl;
        }
    } catch (int) {
        std::cout << "You are not eligible to vote." << std::endl;
    }

    return 0;
}
