import java.util.Scanner;

public class Fchar {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a string: ");
        String input = scanner.next();
        System.out.print("Enter a character to find frequency: ");
        char searchChar = scanner.next().charAt(0);
        int frequency = findFrequency(input, searchChar);
        System.out.println("Frequency of character: " + frequency);
    }

    public static int findFrequency(String input, char searchChar) {
        int frequency = 0;
        for (char c : input.toCharArray()) {
            if (c == searchChar) {
                frequency++;
            }
        }
        return frequency;
    }
}
