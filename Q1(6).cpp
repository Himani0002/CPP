#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int stu_id;
    string stu_name;
    int stu_age;
    string stu_course;
    string stu_city;
    string stu_email;
    string stu_college;

public:
    void setStudentDetails(int id, string name, int age, string course, string city, string email, string college) {
        stu_id = id;
        stu_name = name;
        stu_age = age;
        stu_course = course;
        stu_city = city;
        stu_email = email;
        stu_college = college;
    }

    int getStudentId() {
        return stu_id;
    }

    // Define getters for other attributes similarly.
};

int main() {
    Student students[5]; // Array to store 5 student records

    // Input student details using setter methods
    for (int i = 0; i < 5; i++) {
        int id, age;
        string name, course, city, email, college;

        // Input student details for each student

        students[i].setStudentDetails(id, name, age, course, city, email, college);
    }

    // Display student records using getter methods as needed

    return 0;
}
