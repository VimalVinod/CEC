import java.util.Scanner;
public class Prime
{
	public static void main(String[] args)
	{
	Scanner s = new Scanner(System.in);
	System.out.print("Enter the number:" + "");
	int num = s.nextInt();
	int flag=0;
	for( int i=1;i<=num;i++)
	{
	if(num%i==0)
	{
	flag+=1;
	}
	}
	if (flag==2)
	{
	System.out.println(num+ "" + "is a prime number....");
	}
	else
	{
	System.out.println(num+ "" + "is Not  a prime number....");
	}
	}
}
