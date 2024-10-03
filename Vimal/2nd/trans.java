import java.util.Scanner;
public class trans
{
public static void main(String[] args)

{
Scanner s = new Scanner(System.in);
System.out.print("Enter the size of matrix:..");
int m = s.nextInt();
int n = s.nextInt();
int arr[][]= new int[m][n];
System.out.print("Enter the matrix Elements...");
for(int i=0;i<m;i++){
for(int j=0;j<n;j++)
arr[i][j]=s.nextInt();
 System.out.println();
}
System.out.println("The input matrix:");
for(int i=0;i<m;i++){

 for(int j=0;j<n;j++)
 System.out.print(arr[i][j]+" ");
 System.out.println();
}
System.out.println("The transpose matrix:");
for(int i=0;i<n;i++){

 for(int j=0;j<m;j++)
 System.out.print(arr[j][i]+" ");
 System.out.println();
}
}}
