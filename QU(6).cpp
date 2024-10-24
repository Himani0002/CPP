#include <iostream>

class Distance {
private:
    int feet;
    float inches;

public:
    Distance() : feet(0), inches(0.0) {}

    Distance(int ft, float in) : feet(ft), inches(in) {}

    void display() const {
        std::cout << "Feet: " << feet << " Inches: " << inches << std::endl;
    }

    Distance operator+(const Distance& d) const {
        int total_feet = feet + d.feet;
        float total_inches = inches + d.inches;
        if (total_inches >= 12.0) {
            total_inches -= 12.0;
            total_feet++;
        }
        return Distance(total_feet, total_inches);
    }
};

int main() {
    Distance d1(5, 10.5);
    Distance d2(2, 8.3);

    Distance sum = d1 + d2;

    std::cout << "Distance 1: ";
    d1.display();

    std::cout << "Distance 2: ";
    d2.display();

    std::cout << "Sum of distances: ";
    sum.display();

    return 0;
}
