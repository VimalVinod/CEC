import java.util.*;

class ShapePerimeter {

    // Method to calculate perimeter of a circle
    public static void calculateCirclePerimeter(double radius) {
        double pi = 3.14;
        double perimeter = 2 * pi * radius;
        System.out.println("Perimeter of the circle: " + perimeter);
    }

    // Method to calculate perimeter of a rectangle
    public static void calculateRectanglePerimeter(int length, int width) {
        double perimeter = 2 * (length + width);
        System.out.println("Perimeter of the rectangle: " + perimeter);
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int choice = 0;

        while (choice != 3) {
            System.out.println("Select shape to calculate perimeter:");
            System.out.println("1. Circle");
            System.out.println("2. Rectangle");
            System.out.println("3. Exit");
            
            System.out.print("Enter your choice (1/2/3): ");
            choice = scanner.nextInt();

            switch (choice) {
                case 1:
                    System.out.print("Enter the radius of the circle: ");
                    double radius = scanner.nextDouble();
                    calculateCirclePerimeter(radius);
                    break;
                case 2:
                    System.out.print("Enter the length of the rectangle: ");
                    int length = scanner.nextInt();
                    System.out.print("Enter the width of the rectangle: ");
                    int width = scanner.nextInt();
                    calculateRectanglePerimeter(length, width);
                    break;
                case 3:
                    System.out.println("Exiting...");
                    break;
                default:
                    System.out.println("Invalid choice");
                    break;
            }
        }
        scanner.close();
    }
}

