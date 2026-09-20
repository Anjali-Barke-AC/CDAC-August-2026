/* Modify exercise 2 Write a Java program to calculate average value of an array elements */

import java.util.Scanner;
public class Question2to8 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter size of an array: ");
        int size = sc.nextInt();

        int[] numbers = new int[size];

        for(int i=0; i<numbers.length; i++) {
            System.out.print("Enter number " + (i + 1) + ": ");
            numbers[i] = sc.nextInt();
        }

        
        // QUESTION 2
        int sum = 0;
        for(int i=0; i<numbers.length; i++) {
            sum = sum + numbers[i];
        }
        System.out.println("Sum: " + sum);


        // QUESTION 3
        int average = sum / numbers.length;
        System.out.println("Average: " + average);


        // QUESTION 4
        int[] copyarr = new int[size];
        for(int i=0; i<size; i++){
            copyarr[i] = numbers[i]; 
        }
        System.out.println("\n---Copied Array---");
        for(int i=0; i<size; i++) {
            System.out.print(copyarr[i] + " ");
        }
        

        //QUESTION 5
        int min = numbers[0];
        int max = numbers[0];

        for(int i=0; i<size; i++) {
            if(min > numbers[i]) {
                min = numbers[i];
            }
        }
        System.out.println("\n\nMinimum Value: " + min);

        for(int i=0; i<size; i++) {
            if(max < numbers[i]) {
                max = numbers[i];
            }
        }
        System.out.println("Maximum Value: " + max);



        //QUESTION 7
        boolean found = false;
        for (int i = 0; i < numbers.length; i++) {
            for (int j = i + 1; j < numbers.length; j++) {
                if (numbers[i] == numbers[j]) {
                    System.out.println("Duplicate: " + numbers[i]);
                    found = true;
                }
            }
        }
        if(found == false){
            System.out.println("Duplicate not found");
        }
        
        sc.close();
    }
    
}
