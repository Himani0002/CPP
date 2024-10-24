#include <iostream>
#include <stdexcept>
#include <cctype>

class DivideByZeroException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Error: Division by zero.";
    }
};

class AgeValidationException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Error: Age is less than 18. Cannot vote.";
    }
};

class PasswordValidationException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Error: Password must contain an uppercase letter.";
    }
};

void validateAge(int age) {
    if (age < 18)
        throw AgeValidationException();
}

void validatePassword(std::string password) {
    bool hasUpperCase = false;
    for (char c : password) {
        if (std::isupper(c)) {
            hasUpperCase = true;
            break;
        }
    }
    if (!hasUpperCase)
        throw PasswordValidationException();
}

int main() {
    int numerator, denominator, age;
    std::string password;

    try {
        std::cout << "Enter numerator and denominator for division: ";
        std::cin >> numerator >> denominator;

        if (denominator == 0)
            throw DivideByZeroException();

        std::cout << "Enter age: ";
        std::cin >> age;
        validateAge(age);

        std::cout << "Enter password: ";
        std::cin >> password;
        validatePassword(password);

        std::cout << "All validations passed.\n";
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
