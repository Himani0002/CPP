#include <iostream>
#include <string>

class Message {
private:
    std::string internalMessage;

public:
    // Constructor with default argument
    Message(std::string message = "Default Message") {
        internalMessage = message;
    }

    // Function to print internal message
    void print() {
        std::cout << "Internal Message: " << internalMessage << std::endl;
    }

    // Function to print a message in addition to the internal message
    void print(std::string additionalMessage) {
        std::cout << "Internal Message: " << internalMessage << ", Additional Message: " << additionalMessage << std::endl;
    }
};

int main() {
    Message defaultMsg;
    defaultMsg.print(); // Print the internal message using the default constructor

    Message customMsg("Custom Message");
    customMsg.print(); // Print the custom message using the parameterized constructor

    customMsg.print("This is an additional message"); // Print the custom message with an additional message

    return 0;
}
