/* 1. Create a class named 'Student' with String variable 'name' , integer variable 
'roll_no'., String variable ‘phone_no’ and String variable ‘address’

a.  Assign the value of roll_no as '2' and that of name as "John" by creating an 
object of the class Student.

b. Assign and print the roll number, phone number and address of two students 
having names "Sam" and "John" respectively by creating two objects of class 
'Student'. */



class Student{
    private String name;
    private int roll_no;
    private String phone_no;
    private String address;

    Student(String name, int roll_no, String phone_no, String address) {
        this.name = name;
        this.roll_no = roll_no;
        this.phone_no = phone_no;
        this.address = address;
    }

    void setName(String name){
        this.name = name;
    }
    String getName(){
        return name;
    }

    void setRollNo(int roll_no) {
        this.roll_no = roll_no;
    }
    int getRollNo(){
        return roll_no;
    }

    void setPhoneNo(String phone_no) {
        this.phone_no = phone_no;
    }
    String getPhoneNo(){
        return phone_no;
    }

    void setAddress(String address) {
        this.address = address;
    }
    String getAddress(){
        return address;
    }

    void display() {
        System.out.println("Name: " + name);
        System.out.println("Roll no: " + roll_no);
        System.out.println("Phone no: " + phone_no);
        System.out.println("Address: " + address);
        System.out.println();
    }
}

public class Question1 {
    public static void main(String[] args) {
     Student s1 = new Student("Sam", 1, "6789439567", "Pune");
     Student s2 = new Student("John", 2, "6648586993", "Mumbai");
     
     s1.display();
     s2.display();
    }
}