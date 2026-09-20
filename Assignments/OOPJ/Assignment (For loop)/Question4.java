/* 4. Using For loops write a program to display the following 
pattern
*
**
***
****
*****         */

public class Question4 {
    public static void main(String[] args) {

        for(int i=0; i<5; i++) {
            for(int j=0; j<=i; j++) {
                System.out.print("*");
            }

            System.out.println();
        }
    }
}
