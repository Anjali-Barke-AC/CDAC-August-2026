/* 6. Using for loops write a program to display the following 
pattern
1
2 3
4 5 6
7 8 9 10   */

public class Question6 {
    public static void main(String[] args) {

        int num = 1;
        for(int i=0; i<4; i++) {
            for(int j=0; j<=i; j++) {
                System.out.print(num + " ");
                num++;
            }
            System.out.println();
        }
    }
}
