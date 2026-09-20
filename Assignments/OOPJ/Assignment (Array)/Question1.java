/* Write a Java program to sort an numeric array. The size of the array will be taken from the user, after 
he specifies the size all the elements of the array will be taken as input and the arryay will be sorted. */

import java.util.Scanner;

class Question1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter size of an array: ");
        int size = sc.nextInt();

        int[] numbers = new int[size];

        for(int i=0; i<numbers.length; i++) {
            System.out.print("Enter number " + (i + 1) + ": ");
            numbers[i] = sc.nextInt();
        }

        for(int i=0; i<numbers.length-1; i++) {
            for(int j=0; j<numbers.length-1-i; j++) {
                if(numbers[j] > numbers[j+1]) {
                    int temp = numbers[j];
                    numbers[j] = numbers[j+1];
                    numbers[j+1] = temp;
                }
            }
        }

        System.out.println("\n-----Sorted Array-----");
        for(int i=0; i<numbers.length; i++) {
            System.out.print(numbers[i] + " ");
        }

        sc.close();
    }
}