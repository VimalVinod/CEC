import java.util.Scanner;

public class Schar {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a string: ");
        String input = scanner.next();
        System.out.print("Enter a character to search: ");
        char searchChar = scanner.next().charAt(0);
        boolean found = searchCharacter(input, searchChar);
     
        System.out.println(found ? "Character found" : "Character not found");
    }

    public static boolean searchCharacter(String input, char searchChar) {
        for (char c : input.toCharArray()) {
            if (c == searchChar) {
                return true;
            }
        }
        return false;
    }
}
