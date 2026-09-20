/* 2. Write a program to print the area and perimeter of a triangle having sides of 3, 4 
and 5 units by creating a class named 'Triangle' with constructor having the three 
sides as its parameters. */

class Triangle {

    int side1;
    int side2;
    int side3;

    Triangle(int side1, int side2, int side3) {
        this.side1 = side1;
        this.side2 = side2;
        this.side3 = side3;
    }

    int perimeter() {
        int result = side1 + side2 + side3;
        return result;
    }

    double area() {
        double result = 0.5 * side1 * side2;
        return result;
    }
}

public class Question2 {
    public static void main(String[] args) {

        Triangle triangle = new Triangle(3,4,5);
        
        System.out.println("Perimeter: " + triangle.perimeter());
        System.out.println("Area: " + triangle.area());
    }
}