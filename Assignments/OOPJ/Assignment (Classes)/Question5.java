/* 5. Write a program that would print the information (name, year of joining, salary, 
address) of three employees by creating a class named 'Employee'. The output 
should be as follows:

Name        Year of joining         Address
Robert          1994            64C- WallsStreat
Sam             2000            68D- WallsStreat
John            1999            26B- WallsStreat        */


class Employee {
    String name;
    int year;

    String address;

    Employee(String name, int year, String address) {
        this.name = name;
        this.year = year;
        this.address = address;
    }

    void display(){
        System.out.printf(" %-15s %-15s %-20s%n", name, year, address);
    }
}
public class Question5 {
    public static void main(String[] args) {
        Employee e1 = new Employee("Robert", 1994, "64C- WallsStreat");
        Employee e2 = new Employee("Sam", 2000, "68D- WallsStreat");
        Employee e3 = new Employee("John", 1999, "26B- WallsStreat");

        System.out.printf(" %-10s %-21s %-20s%n", "Name", "Year of joining ", "Address");

        e1.display();
        e2.display();
        e3.display();
    }
}
