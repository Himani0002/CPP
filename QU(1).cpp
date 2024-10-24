#include <iostream>

class ExceptionHandlingExample {
public:
    void performOperation() {
        try {
            int result = 10 / 0;  
            std::cout << "Result: " << result << std::endl;
        } catch (const std::exception& e) {
            std::cerr << "An exception occurred: " << e.what() << std::endl;
        }
    }
};

int main() {
    ExceptionHandlingExample example;
    example.performOperation();

    return 0;
}
