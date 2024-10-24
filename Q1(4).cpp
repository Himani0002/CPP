#include <iostream>
#include <string>
using namespace std;

class DiamondCompany {
private:
    int comp_id;
    string comp_name;
    int comp_staff_quantity;
    double comp_revenue;
    int comp_import_raw_diamonds;
    int comp_export_diamonds;
    string comp_ceo;

public:
    DiamondCompany(int id, const string& name, int staff_quantity, double revenue,
                   int import_raw_diamonds, int export_diamonds, const string& ceo)
        : comp_id(id), comp_name(name), comp_staff_quantity(staff_quantity),
          comp_revenue(revenue), comp_import_raw_diamonds(import_raw_diamonds),
          comp_export_diamonds(export_diamonds), comp_ceo(ceo) {}

    void displayInfo() {
        cout << "Company ID: " << comp_id << endl;
        cout << "Company Name: " << comp_name << endl;
        cout << "Staff Quantity: " << comp_staff_quantity << endl;
        cout << "Annual Revenue: " << comp_revenue << endl;
        cout << "Raw Diamonds Imported per Year: " << comp_import_raw_diamonds << endl;
        cout << "Diamonds Exported per Year: " << comp_export_diamonds << endl;
        cout << "CEO: " << comp_ceo << endl;
    }
};

int main() {
    int N; // Number of companies
    cout << "Enter the number of Diamond companies: ";
    cin >> N;

    DiamondCompany* companies = new DiamondCompany[N];

    for (int i = 0; i < N; ++i) {
        cout << "\nEnter details for Company #" << i + 1 << endl;
        int id, staff_quantity, import_raw_diamonds, export_diamonds;
        double revenue;
        string name, ceo;

        cout << "Company ID: ";
        cin >> id;
        cin.ignore();
        cout << "Company Name: ";
        getline(cin, name);
        cout << "Staff Quantity: ";
        cin >> staff_quantity;
        cout << "Annual Revenue: ";
        cin >> revenue;
        cout << "Raw Diamonds Imported per Year: ";
        cin >> import_raw_diamonds;
        cout << "Diamonds Exported per Year: ";
        cin >> export_diamonds;
        cin.ignore();
        cout << "CEO: ";
        getline(cin, ceo);

        companies[i] = DiamondCompany(id, name, staff_quantity, revenue, import_raw_diamonds, export_diamonds, ceo);
    }

    cout << "\nCompany Information:\n";
    for (int i = 0; i < N; ++i) {
        cout << "\nCompany #" << i + 1 << ":\n";
        companies[i].displayInfo();
    }

    delete[] companies; // Clean up dynamic memory

    return 0;
}
