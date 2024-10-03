import java.util.Scanner;
public class sumn
{
	public static void main(String[] args)
	{
	Scanner s = new Scanner(System.in);
	System.out.print("Enter the number:" + "");
	int num = s.nextInt();
	int sum=0;
	for(int i=1;i<=num;i++)
	{
	sum+=i;
	}
	System.out.println("Sum of"+ num + " number is" + sum);
	}
	}
	
