#include <iostream>
using namespace std;

class Hotel {
private:
    int hotel_id;
    string hotel_name;
    string hotel_type;
    string hotel_rating;
    string hotel_location;
    int hotel_establish_year;
    int hotel_staff_quantity;
    int hotel_room_quantity;

public:
    // Constructors, setters, getters, and display function here.
};

int main() {
    int n; // Number of hotels
    cout << "Enter the number of hotels: ";
    cin >> n;

    Hotel hotels[n]; // Array of Hotel objects

    for (int i = 0; i < n; i++) {
        // Input data for each hotel object
    }

    for (int i = 0; i < n; i++) {
        // Display data for each hotel object
    }

    return 0;
}
