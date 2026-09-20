/* 4. Print the sum, difference and product of two complex numbers by creating a 
class named 'Complex' with separate methods for each operation whose real and 
imaginary parts are entered by user */

import java.util.Scanner;

class Complex {
    int number1;
    int number2;

    Complex(int number1, int number2) {
        this.number1 = number1;
        this.number2 = number2;
    }
    
    int sum(){
        int result = number1 + number2;
        return result;
    }

    int difference(){
        int result = number1 - number2;
        return result;
    }

    int product(){
        int result = number1 * number2;
        return result;
    }
}


public class Question4 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter 1st number: ");
        int num1 = sc.nextInt();

        System.out.print("Enter 2st number: ");
        int num2 = sc.nextInt();

        Complex complex = new Complex(num1, num2);

        System.out.println("Adition: " + complex.sum());
        System.out.println("Difference: " + complex.difference());
        System.out.println("Product: " + complex.product());

        sc.close();
    }   
}
