/* 3. Write a program to print the area of two rectangles having sides (4,5) and (5,8) 
respectively by creating a class named 'Rectangle' with a method named 'area' 
which returns the area and length and breadth passed as parameters to its 
constructor. */

class Rectangle {

    int length;
    int width;

    Rectangle(int length, int width) {
        this.length = length;
        this.width = width;
    }

    int area(){
        return length * width;
    }
}

public class Question3 {
    
    public static void main(String[] args) {

        Rectangle c1 = new Rectangle(4,5);
        Rectangle c2 = new Rectangle(5,8);

        System.out.println("Area of Rectangle 1: " + c1.area());
        System.out.println("Area of Rectangle 2: " + c2.area());
    }
}
