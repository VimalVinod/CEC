import java.util.Scanner;

public class Trace {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        System.out.print("Enter the size of the matrix (n x n): ");
        int n = scanner.nextInt();
        
        int[][] matrix = new int[n][n];
        
        System.out.println("Enter the elements of the matrix:");
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                matrix[i][j] = scanner.nextInt();
               
            }
            System.out.println();
        }
        System.out.println("The input matrix:");
for(int i=0;i<n;i++){

 for(int j=0;j<n;j++)
 System.out.print(matrix[i][j]+" ");
 System.out.println();
}
       
        int trace = 0;
        
        for (int i = 0; i < n; i++) {
            trace += matrix[i][i];
       
        }
        System.out.println("Trace of the matrix: " + trace);
        scanner.close();
    
}
}
    
  
