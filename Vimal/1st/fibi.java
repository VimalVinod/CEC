import java.util.Scanner;
public class fibi
{
	public static void main(String[] args)
	{
	Scanner s = new Scanner(System.in);
	System.out.print("Enter the number:" + "");
	int num = s.nextInt();
	int s1=0;
	int s2=1;
	System.out.print("Fibonacci series..");
	System.out.print(s1+"\t");
	System.out.print(s2+"\t");
	for(int i=3;i<=num;i++)
	{
	int s3= s1+ s2;
	System.out.print(s3+"\t");
	s1=s2;
	s2=s3;
	}
	}
	}
	
