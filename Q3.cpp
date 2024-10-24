#include <iostream>
using namespace std;

class Employee {
protected:
    string name;
    int empId;

public:
    void getData() {
        cout << "Enter Employee Name: ";
        cin >> name;
        cout << "Enter Employee ID: ";
        cin >> empId;
    }
    void displayData() {
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << empId << endl;
    }
};

class Department : public Employee {
protected:
    string dept;

public:
    void getDepartment() {
        cout << "Enter Department: ";
        cin >> dept;
    }
    void displayDepartment() {
        cout << "Department: " << dept << endl;
    }
};

class Salary : public Department {
protected:
    float salary;

public:
    void getSalary() {
        cout << "Enter Salary: ";
        cin >> salary;
    }
    void displaySalary() {
        cout << "Salary: $" << salary << endl;
    }
};

int main() {
    Salary emp; 
    emp.getData();
    emp.getDepartment(); 
    emp.getSalary();  

    cout << "\nEmployee Information:\n";
    emp.displayData();  
    emp.displayDepartment(); 
    emp.displaySalary();  

    return 0;
}
