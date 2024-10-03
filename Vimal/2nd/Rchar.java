import java.util.Scanner;

public class Rchar {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a string: ");
        String input = scanner.next();
        System.out.print("Enter a character to replace: ");
        char replaceChar = scanner.next().charAt(0);
        System.out.print("Enter a replacement character: ");
        char newChar = scanner.next().charAt(0);
        String result = replaceCharacter(input, replaceChar, newChar);
        System.out.println("Resulting string: " + result);
    }

    public static String replaceCharacter(String input, char replaceChar, char newChar) {
        StringBuilder result = new StringBuilder();
        for (char c : input.toCharArray()) {
            if (c == replaceChar) {
                result.append(newChar);
            } else {
                result.append(c);
            }
        }
        return result.toString();
    }
}
