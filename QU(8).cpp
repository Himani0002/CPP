#include <iostream>
#include <string>

class Admin {
protected:
    std::string company_name;
    int manager_salary;
    int employee_salary;
    int total_staff;
    int total_annual_revenue;
    bool can_terminate;

public:
    Admin(std::string company_name, int manager_salary, int employee_salary, int total_staff,
          int total_annual_revenue, bool can_terminate)
        : company_name(company_name), manager_salary(manager_salary), employee_salary(employee_salary),
          total_staff(total_staff), total_annual_revenue(total_annual_revenue), can_terminate(can_terminate) {}

    void myAccess() {
        std::cout << "Accessing Admin class members:" << std::endl;
        std::cout << "Company Name: " << company_name << std::endl;
        std::cout << "Manager Salary: " << manager_salary << std::endl;
        std::cout << "Employee Salary: " << employee_salary << std::endl;
        std::cout << "Total Staff: " << total_staff << std::endl;
        std::cout << "Total Annual Revenue: " << total_annual_revenue << std::endl;
        std::cout << "Can Terminate: " << (can_terminate ? "Yes" : "No") << std::endl;
    }
};

class Manager : public Admin {
public:
    Manager(std::string company_name, int manager_salary, int employee_salary, int total_staff,
            int total_annual_revenue, bool can_terminate)
        : Admin(company_name, manager_salary, employee_salary, total_staff, total_annual_revenue, can_terminate) {}

    void myAccess() {
        std::cout << "Accessing Manager class members:" << std::endl;
        std::cout << "Company Name: " << company_name << std::endl;
        std::cout << "Manager Salary: " << manager_salary << std::endl;
    }
};

class Employee : public Manager {
public:
    Employee(std::string company_name, int manager_salary, int employee_salary, int total_staff,
             int total_annual_revenue, bool can_terminate)
        : Manager(company_name, manager_salary, employee_salary, total_staff, total_annual_revenue, can_terminate) {}

    void myAccess() {
        std::cout << "Accessing Employee class members:" << std::endl;
        std::cout << "Company Name: " << company_name << std::endl;
        std::cout << "Employee Salary: " << employee_salary << std::endl;
    }
};

int main() {
    Admin admin("ABC Corp", 100000, 50000, 50, 2000000, true);
    Manager manager("XYZ Corp", 120000, 60000, 30, 1800000, true);
    Employee employee("EFG Corp", 80000, 40000, 100, 1500000, false);

    admin.myAccess();
    manager.myAccess();
    employee.myAccess();

    return 0;
}
