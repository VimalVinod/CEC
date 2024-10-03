import java.util.Scanner;
public class small
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
int smal=arr[0];
for(int i=1;i<n;i++){

 
if(smal>arr[i]){
smal=arr[i];
}
}

System.out.print("Smallest  array elements\t" + smal);
}
}
