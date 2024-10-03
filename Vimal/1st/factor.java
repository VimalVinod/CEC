import java.util.Scanner;
public class factor
{
	public static void main(String[] args)
	{
	Scanner s = new Scanner(System.in);
	System.out.print("Enter the number:" + "");
	int num = s.nextInt();
	
	System.out.println( "Factors of"+ num + "is.\t");
	for( int i=1;i<=num;i++)
	{
	if(num%i==0)
	{
	System.out.println( i+"\t");
	}
	}
	
	}
}
