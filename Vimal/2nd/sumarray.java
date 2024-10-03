import java.util.Scanner;
public class sumarray
{
public static void main(String[] args)

{
Scanner s = new Scanner(System.in);
System.out.print("Enter the size of Array:..");
int n = s.nextInt();
int arr []= new int[n];
System.out.print("Enter the array Elements...");
for(int i=0;i<n;i++){
arr[i]=s.nextInt();
}
int sum=0;
for(int i=0;i<n;i++){
sum+=arr[i];
}
System.out.print("Sum  of array elements\t" + sum);
}
}
