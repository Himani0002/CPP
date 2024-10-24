#include <iostream>
#include <iomanip>

int main() {
    int totalSeconds;
    std::cout << "Enter time in seconds: ";
    std::cin >> totalSeconds;

    int hours = totalSeconds / 3600;
    int minutes = (totalSeconds % 3600) / 60;
    int seconds = totalSeconds % 60;

    std::cout << "Time in HH:MM:SS format: ";
    std::cout << std::setfill('0') << std::setw(2) << hours << ":"
              << std::setfill('0') << std::setw(2) << minutes << ":"
              << std::setfill('0') << std::setw(2) << seconds << std::endl;

    return 0;
}
