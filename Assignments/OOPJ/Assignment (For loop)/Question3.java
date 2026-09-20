/* 3. using for loops write a Java Program to display every 7th 
number from 1 to 200 */

public class Question3 {
    public static void main(String[] args) {

        for(int i=1; i<=200; i++) {
            if(i % 7 == 0) {
                System.out.println(i);
            }
        }
    }
}
