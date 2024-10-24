class Calculator {
    public int calculate(int a, int b) {
        // Perform division
        return a / b;
    }

    public int calculate(int a, int b, int c) {
        // Perform subtraction
        return a - b - c;
    }

    public int calculate(int a, int b, int c, int d) {
        // Perform multiplication
        return a * b * c * d;
    }

    public int calculate(int a, int b, int c, int d, int e) {
        // Perform addition
        return a + b + c + d + e;
    }
}

public class Main {
    public static void main(String[] args) {
        Calculator calculator = new Calculator();

        System.out.println("Division: " + calculator.calculate(10, 2));
        System.out.println("Subtraction: " + calculator.calculate(20, 5, 3));
        System.out.println("Multiplication: " + calculator.calculate(2, 3, 4, 5));
        System.out.println("Addition: " + calculator.calculate(1, 2, 3, 4, 5));
    }
}
