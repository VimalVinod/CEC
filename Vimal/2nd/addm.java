import java.util.Scanner;
public class addm
{
public static void main(String[] args)

{
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter the size of matrix 1:..");
		int m = sc.nextInt();
		int n = sc.nextInt();
		int a[][]= new int[m][n];
		int b[][]= new int[m][n];
		int s[][]= new int[m][n];
		System.out.print("Enter the matrix Elements...");
		for(int i=0;i<m;i++){
		for(int j=0;j<n;j++)
		a[i][j]=sc.nextInt();
		 System.out.println();
		}
		


System.out.print("Enter the matrix 2 Elements...");
		for(int i=0;i<m;i++){
		for(int j=0;j<n;j++)
		b[i][j]=sc.nextInt();
		 System.out.println();
		}
		System.out.println("The input matrix  1 :");
for(int i=0;i<m;i++){

 for(int j=0;j<n;j++)
 System.out.print(a[i][j]+" ");
 System.out.println();
}
System.out.println("The input matrix  2 :");
for(int i=0;i<m;i++){

 for(int j=0;j<n;j++)
 System.out.print(b[i][j]+" ");
 System.out.println();
}

for (int i =0;i<m;i++){
for (int j =0;j<n;j++)
s[i][j]=a[i][j]+b[i][j];}

System.out.println(" The sum of matrix Elements...");
for(int i=0;i<m;i++){

 for(int j=0;j<n;j++)
 System.out.print(s[i][j]+" ");
 System.out.println();
}
}
}

