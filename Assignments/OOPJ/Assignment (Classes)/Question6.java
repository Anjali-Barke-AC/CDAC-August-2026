/* 6. Write a program by creating an 'Employee' class having the following methods 
and print the final salary.
1 - 'getInfo()' which takes the salary, number of hours of work per day of employee
as parameter
2 - 'addSal()' which adds $10 to salary of the employee if it is less than $500.
3 - 'addWork()' which adds $5 to salary of employee if the number of hours of 
work per day is more than 6 hours.  */

import java.util.Scanner;

class Employee {
    double salary;
    int hours;

    void getInfo(double salary, int hours) {
        this.salary = salary;
        this.hours = hours;
    }

    double addSal(){
        if(salary < 500) {
            salary += 10;
        }
        return salary;
    }

    double addWork() {
        if(hours > 6) {
            salary += 5;
        }
        return salary;
    }
}

public class Question6 {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter Salary: ");
        double salary = sc.nextDouble();

        System.out.print("Enter hours of work per day: ");
        int hours = sc.nextInt();

        Employee e1 = new Employee();

        e1.getInfo(salary, hours);
        e1.addSal();
        e1.addWork();

        System.out.println("Salary: " + e1.salary);

        sc.close();


    }
}
