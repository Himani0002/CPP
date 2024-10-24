#include <iostream>
#include <string>
using namespace std;

class Customer {
private:
    int cust_id;
    string cust_name;
    int cust_age;
    string cust_city;
    string cust_mobile_number;
    int cust_simcard_validity;
    string cust_telecom_brand_name;

public:
    // Constructor to initialize attributes
    Customer(int id, string name, int age, string city, string mobile, int validity, string brand) {
        cust_id = id;
        cust_name = name;
        cust_age = age;
        cust_city = city;
        cust_mobile_number = mobile;
        cust_simcard_validity = validity;
        cust_telecom_brand_name = brand;
    }

    // Getter methods
    int getId() { return cust_id; }
    string getName() { return cust_name; }
    int getAge() { return cust_age; }
    // Add getter methods for other attributes

    // Setter methods
    void setId(int id) { cust_id = id; }
    void setName(string name) { cust_name = name; }
    void setAge(int age) { cust_age = age; }
    // Add setter methods for other attributes
};

int main() {
    // Create instances of Customer for 5 customers and set their attributes using setter methods.
    // Retrieve and display customer information using getter methods.
    
    return 0;
}
