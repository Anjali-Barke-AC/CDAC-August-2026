/* Modify exercise 2 to accept 2 different values in 2 different arrays and  find the common elements 
between two arrays */

import java.util.Scanner;

public class Question9 {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        boolean found = false;

        System.out.print("Enter size of an array: ");
        int size = sc.nextInt();

        int[] arr1 = new int[size];
        int[] arr2 = new int[size];

        System.out.println("\nEnter input for array 1");
        for(int i=0; i<size; i++) {
            System.out.print("Enter number " + (i + 1) + ": ");
            arr1[i] = sc.nextInt();
        }

        System.out.println("\nEnter input for array 2");
        for(int i=0; i<size; i++) {
            System.out.print("Enter number " + (i + 1) + ": ");
            arr2[i] = sc.nextInt();
        }

        System.out.println();
        for(int i=0; i<size; i++) {
            for(int j=0; j<size; j++) {
                if(arr1[i] == arr2[j]) {
                    System.out.println("Common: " + arr1[i]);
                    found = true;
                }
            }
        }

        if(found == false) {
            System.out.println("Common not found");
        }

        sc.close();
    }
    
}
