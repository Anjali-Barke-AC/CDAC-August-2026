/* 1. Using for loops write a Java Program to display all odd 
numbers from 1 to 1000 */

class Question1 {

    public static void main(String[] args) {

        for(int i=0; i<=1000; i++) {
            if(i % 2 != 0) {
                System.out.println(i);
            }
        }
    }
}