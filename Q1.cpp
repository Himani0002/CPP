#include <iostream>
#include <string>
using namespace std;

class Employee {
public:
    int emp_id;
    string emp_name;
    int emp_age;
    string emp_role;
    double emp_salary;
    string emp_city;
    int emp_experience;
    string emp_company_name;

    void displayInfo() {
        cout << "Employee ID: " << emp_id << std::endl;
        cout << "Employee Name: " << emp_name << std::endl;
        cout << "Employee Age: " << emp_age << std::endl;
        cout << "Employee Role: " << emp_role << std::endl;
        cout << "Employee Salary: " << emp_salary << std::endl;
        cout << "Employee City: " << emp_city << std::endl;
        cout << "Employee Experience: " << emp_experience << " years" << std::endl;
        cout << "Employee Company: " << emp_company_name << std::endl;
        cout << std::endl;
    }
};

int main() {
    Employee employees[5];

    for (int i = 0; i < 5; ++i) {
        employees[i].emp_id = i + 1;
        employees[i].emp_name = "Employee " + std::to_string(i + 1);
        employees[i].emp_age = 30 + i;  
        employees[i].emp_role = "Role " + std::to_string(i + 1);
        employees[i].emp_salary = 50000 + i * 10000;  
        employees[i].emp_city = "City " + std::to_string(i + 1);
        employees[i].emp_experience = i + 1;  
        employees[i].emp_company_name = "Company " + std::to_string(i + 1);
    }

    for (int i = 0; i < 5; ++i) {
        employees[i].displayInfo();
    }

    return 0;
}
