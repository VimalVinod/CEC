import java.util.*;
class multym
{
	public static void main(String[]args)
	{
	Scanner sc=new Scanner(System.in);
	System.out.println("Enter the row and column  of A");
	int r1=sc.nextInt();
	int c1=sc.nextInt();
	int A[][]=new int[r1][c1];
	System.out.println("Enter the elements of first matrix");
	for(int i=0;i<r1;i++)
		for(int j=0;j<c1;j++)
		{
			A[i][j]=sc.nextInt();
		}
	System.out.println("Enter the row and column  of B");
	int r2=sc.nextInt();
	int c2=sc.nextInt();
	int B[][]=new int[r2][c2];
	int P[][]=new int[r1][c2];
	System.out.println("Enter the elements of second matrix");
	for(int i=0;i<r2;i++)
		for(int j=0;j<c2;j++)
		{
			B[i][j]=sc.nextInt();
		}
	if(c1==r2)
	{
		for(int i=0;i<r1;i++)
			for(int j=0;j<c2;j++)
			{
				P[i][j]=0;
				for(int k=0;k<c1;k++)
					P[i][j]+=A[i][k]*B[k][j];
			}
		System.out.println("The product of matrics...");
		for(int i=0;i<r1;i++)
		{
			for(int j=0;j<c2;j++)
			System.out.print(P[i][j]+" ");
			System.out.println();
		}
		}
		else
		System.out.println("multiplication not possible");
		}
		}
		
