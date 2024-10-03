import java.util.*;
class Myexception extends Exception
{
Myexception(String message)
{
super(message);
}
}
class Myexp
{
public static void main(String []args)
{
Scanner sc =new Scanner(System.in);
System.out.println("Enter the balance:");
int b=sc.nextInt();
try{
if(b<500)
throw new Myexception("Account is not stable");
else 
System.out.println("Account is Stable");
}
catch (Exception e)
{
System.out.println("Caught Myexception");
System.out.println(e);
}
}
}
