#include<iostream>

using namespace std;

class Number {
protected:
    int num;
public:
    void getNum() {
        cout << "Enter a number: ";
        cin >> num;
    }
};

class Square : public Number {
public:
    void calculateSquare() {
        cout << "Square of " << num << " is: " << num * num << endl;
    }
};

class Cube : public Number {
public:
    void calculateCube() {
        cout << "Cube of " << num << " is: " << num * num * num << endl;
    }
};

int main() {
    Square s;
    Cube c;
    
    s.getNum();
    s.calculateSquare();
    
    c.getNum();
    c.calculateCube();
    
    return 0;
}
