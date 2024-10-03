import java.util.Scanner;

class Employee {
    public String name;
    public int age;
    public String phoneNumber;
    public String address;
    public double salary;

    public Employee(String name, int age, String phoneNumber, String address, double salary) {
        this.name = name;
        this.age = age;
        this.phoneNumber = phoneNumber;
        this.address = address;
        this.salary = salary;
    }

    public void printSalary() {
        System.out.println("Salary: " + salary);
    }

    public void displayInfo() {
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
        System.out.println("Phone Number: " + phoneNumber);
        System.out.println("Address: " + address);
        printSalary();
    }

    public void readDetails(Scanner scanner) {
        System.out.print("Name: ");
        this.name = scanner.nextLine();
        System.out.print("Age: ");
        this.age = scanner.nextInt();
        scanner.nextLine(); // Consume newline
        System.out.print("Phone Number: ");
        this.phoneNumber = scanner.nextLine();
        System.out.print("Address: ");
        this.address = scanner.nextLine();
        System.out.print("Salary: ");
        this.salary = scanner.nextDouble();
        scanner.nextLine(); // Consume newline
    }
}
class Officer extends Employee {
    public String specialization;

    public Officer(String name, int age, String phoneNumber, String address, double salary, String specialization) {
        super(name, age, phoneNumber, address, salary);
        this.specialization = specialization;
    }

    @Override
    public void displayInfo() {
        super.displayInfo();
        System.out.println("Specialization: " + specialization);
    }

    public void readDetails(Scanner scanner) {
        super.readDetails(scanner);
        System.out.print("Specialization: ");
        this.specialization = scanner.nextLine();
    }
}
class Manager extends Employee {
    public String department;

    public Manager(String name, int age, String phoneNumber, String address, double salary, String department) {
        super(name, age, phoneNumber, address, salary);
        this.department = department;
    }

    @Override
    public void displayInfo() {
        super.displayInfo();
        System.out.println("Department: " + department);
    }

    public void readDetails(Scanner scanner) {
        super.readDetails(scanner);
        System.out.print("Department: ");
        this.department = scanner.nextLine();
    }
}


public class Emp {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter details for Officer:");
        Officer officer = new Officer("", 0, "", "", 0.0, "");
        officer.readDetails(scanner);

        System.out.println("\nEnter details for Manager:");
        Manager manager = new Manager("", 0, "", "", 0.0, "");
        manager.readDetails(scanner);

        System.out.println("\nOfficer Details:");
        officer.displayInfo();

        System.out.println("\nManager Details:");
        manager.displayInfo();

        scanner.close();
    }
}

