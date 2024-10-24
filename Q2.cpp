#include <iostream>
#include <string>

class Employee {
public:
    int emp_id;
    std::string emp_name;
    int emp_age;
    std::string emp_role;
    double emp_salary;
    std::string emp_city;
    int emp_experience;
    std::string emp_company_name;

    // Member function to display employee details
    void displayEmployeeDetails() {
        std::cout << "Employee ID: " << emp_id << std::endl;
        std::cout << "Employee Name: " << emp_name << std::endl;
        std::cout << "Employee Age: " << emp_age << std::endl;
        std::cout << "Employee Role: " << emp_role << std::endl;
        std::cout << "Employee Salary: $" << emp_salary << std::endl;
        std::cout << "Employee City: " << emp_city << std::endl;
        std::cout << "Employee Experience: " << emp_experience << " years" << std::endl;
        std::cout << "Employee Company Name: " << emp_company_name << std::endl;
    }
};

int main() {
    Employee employees[5];

    // Input employee details
    for (int i = 0; i < 5; i++) {
        std::cout << "Enter details for Employee " << i + 1 << std::endl;
        employees[i].emp_id = i + 1;
        std::cout << "Name: ";
        std::cin >> employees[i].emp_name;
        std::cout << "Age: ";
        std::cin >> employees[i].emp_age;
        std::cout << "Role: ";
        std::cin >> employees[i].emp_role;
        std::cout << "Salary: $";
        std::cin >> employees[i].emp_salary;
        std::cout << "City: ";
        std::cin >> employees[i].emp_city;
        std::cout << "Experience (in years): ";
        std::cin >> employees[i].emp_experience;
        std::cout << "Company Name: ";
        std::cin >> employees[i].emp_company_name;
    }

    // Display employee details
    for (int i = 0; i < 5; i++) {
        std::cout << "\nDetails of Employee " << i + 1 << std::endl;
        employees[i].displayEmployeeDetails();
    }

    return 0;
}
