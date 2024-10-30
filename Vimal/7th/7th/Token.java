import java.io.*;
import java.util.StringTokenizer;

public class Token {
    public static void main(String[] args) {
        try (BufferedReader br = new BufferedReader(new FileReader("Sample.txt")))
        {
            String line = br.readLine();
            StringTokenizer tokenizer = new StringTokenizer(line);

            int sum = 0;
            System.out.println("Integers: ");
            while (tokenizer.hasMoreTokens()) {
                String token = tokenizer.nextToken();
                int integer = Integer.parseInt(token);
                System.out.print(integer + " ");
                sum += integer;
            }
            System.out.println("\nSum: " + sum);
        }
        catch (IOException e)
        {
            System.out.println("Error reading file: " + e.getMessage());
        }
    }
}
