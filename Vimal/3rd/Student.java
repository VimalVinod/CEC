import java.util.*;

class Student {
    private String name;
    private int rollNo;
    private int[] marks;

    public Student() {
        marks = new int[5];
    }

    public void readDetails() {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter student's name: ");
        name = scanner.nextLine();

        System.out.print("Enter roll number: ");
        rollNo = scanner.nextInt();

        System.out.println("Enter marks for five subjects(out of 100):");

        for (int i = 0; i < 5; i++) {
            System.out.print("Subject " + (i + 1) + ": ");
            marks[i] = scanner.nextInt();
        }
    }

    public void displayDetails() {
        System.out.println("\nStudent Details:");
        System.out.println("Name: " + name);
        System.out.println("Roll Number: " + rollNo);

        System.out.println("Marks of Subjects...:");
        for (int i = 0; i < 5; i++) {
            System.out.println("Subject " + (i + 1) + ": " + marks[i]);
        }
    }

    public static void main(String[] args) {
        Student student = new Student();

        student.readDetails();
        student.displayDetails();
    }
}
