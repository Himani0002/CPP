#include <iostream>

class Shape {
public:
    virtual float calculate() = 0;
};

class Circle : public Shape {
private:
    float radius;

public:
    Circle(float r) : radius(r) {}

    float calculate() override {
        return 3.14f * radius * radius;
    }
};

class Triangle : public Shape {
private:
    float base, height;

public:
    Triangle(float b, float h) : base(b), height(h) {}

    float calculate() override {
        return 0.5f * base * height;
    }
};

class Rectangle : public Shape {
private:
    float length, width;

public:
    Rectangle(float l, float w) : length(l), width(w) {}

    float calculate() override {
        return length * width;
    }
};

int main() {
    Circle circle(5);
    Triangle triangle(4, 7);
    Rectangle rectangle(6, 9);

    std::cout << "Area of circle: " << circle.calculate() << std::endl;
    std::cout << "Area of triangle: " << triangle.calculate() << std::endl;
    std::cout << "Area of rectangle: " << rectangle.calculate() << std::endl;

    return 0;
}
