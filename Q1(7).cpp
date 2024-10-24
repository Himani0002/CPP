#include <iostream>
using namespace std;

class Distance {
private:
    int feet, inch;

public:
    void getDistance() {
        cout << "Enter feet: ";
        cin >> feet;
        cout << "Enter inch: ";
        cin >> inch;
    }

    void showDistance() {
        cout << "Feet: " << feet << " Inch: " << inch << endl;
    }

    void addDistance(Distance d1, Distance d2) {
        inch = d1.inch + d2.inch;
        feet = d1.feet + d2.feet + (inch / 12);
        inch %= 12;
    }
};

int main() {
    Distance distance1, distance2, result;
    cout << "Enter details for distance 1:\n";
    distance1.getDistance();
    cout << "Enter details for distance 2:\n";
    distance2.getDistance();

    result.addDistance(distance1, distance2);

    cout << "Distance 1:\n";
    distance1.showDistance();
    cout << "Distance 2:\n";
    distance2.showDistance();
    cout << "Sum of distances:\n";
    result.showDistance();

    return 0;
}
