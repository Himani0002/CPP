#include <iostream>
#include <string>
using namespace std;

class FastFoodCafe {
private:
    int cafe_id;
    string cafe_name;
    string cafe_type;
    string cafe_rating;
    string cafe_location;
    int cafe_establish_year;
    int cafe_staff_quantity;

public:
    // Default constructor
    FastFoodCafe() {
        cafe_id = 0;
        cafe_name = "";
        cafe_type = "";
        cafe_rating = "";
        cafe_location = "";
        cafe_establish_year = 0;
        cafe_staff_quantity = 0;
    }

    // Method to input cafe information
    void inputCafeInfo() {
        cout << "Enter Cafe ID: ";
        cin >> cafe_id;
        cout << "Enter Cafe Name: ";
        cin.ignore();
        getline(cin, cafe_name);
        cout << "Enter Cafe Type: ";
        getline(cin, cafe_type);
        cout << "Enter Cafe Rating: ";
        getline(cin, cafe_rating);
        cout << "Enter Cafe Location: ";
        getline(cin, cafe_location);
        cout << "Enter Cafe Establishment Year: ";
        cin >> cafe_establish_year;
        cout << "Enter Cafe Staff Quantity: ";
        cin >> cafe_staff_quantity;
    }

    // Method to display cafe information
    void displayCafeInfo() {
        cout << "Cafe ID: " << cafe_id << endl;
        cout << "Cafe Name: " << cafe_name << endl;
        cout << "Cafe Type: " << cafe_type << endl;
        cout << "Cafe Rating: " << cafe_rating << endl;
        cout << "Cafe Location: " << cafe_location << endl;
        cout << "Cafe Establishment Year: " << cafe_establish_year << endl;
        cout << "Cafe Staff Quantity: " << cafe_staff_quantity << endl;
    }
};

int main() {
    int N;
    cout << "Enter the number of cafes: ";
    cin >> N;

    FastFoodCafe cafes[N];

    for (int i = 0; i < N; i++) {
        cafes[i].inputCafeInfo();
    }

    cout << "Cafe Information:\n";
    for (int i = 0; i < N; i++) {
        cafes[i].displayCafeInfo();
        cout << "-------------------------\n";
    }

    return 0;
}
