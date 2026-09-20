/* 5. Using for loops write a program to display the following 
pattern

*****
****
***
**
*                     */

public class Question5 {
   public static void main(String[] args) {
    for(int i=5; i>0; i--) {
        for(int j=0; j<i; j++) {
            System.out.print("*");
        }
        System.out.println();
    }
   } 
}
