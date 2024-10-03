 class Employee {
    public void display() {
        System.out.println("Name of class is Employee.");
    }

    public void calcSalary() {
        System.out.println("Salary of employee is 10000.");
    }
}
 class Engineer extends Employee {
    
    public void display() {
        super.display();
        System.out.println("Name of class is Engineer.");
    }

    
    public void calcSalary() {
        super.calcSalary();
        System.out.println("Salary of employee is 20000.");
    }
}
class Eng {
    public static void main(String[] args) {
        Engineer e = new Engineer();
        e.display();
        e.calcSalary();
    }
}


