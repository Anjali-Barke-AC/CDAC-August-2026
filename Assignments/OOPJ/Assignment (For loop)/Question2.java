/* 2. using for loops write a Java Program to display all even 
numbers from 1 to 500. */

public class Question2 {
    public static void main(String[] args) {

        for(int i=0; i<=500; i++) {
            if(i % 2 == 0) {
                System.out.println(i);
            }
        }
    }
}
