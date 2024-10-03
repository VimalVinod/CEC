import java.util.Scanner;

public class Spalindrome {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        System.out.print("Enter a string: ");
        String input = scanner.nextLine();
        
        if (isPalindrome(input)) {
            System.out.println(input + " is a palindrome.");
        } else {
            System.out.println(input + " is not a palindrome.");
        }
        
        scanner.close();
    }
    
    public static boolean isPalindrome(String str) {
        int start = 0;
        int end = str.length() - 1;
        
        while (start < end) {
            if (Character.toLowerCase(str.charAt(start)) != Character.toLowerCase(str.charAt(end))) {
                return false;
            }
            start++;
            end--;
        }
        
        return true;
    }
}
