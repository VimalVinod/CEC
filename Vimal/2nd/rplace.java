import java.util.Scanner;
public class rplace
{
public static void main(String[] args)

{
int flag=0;
Scanner s = new Scanner(System.in);
System.out.print("Enter the size of Array:..");
int n = s.nextInt();
int arr []= new int[n];
System.out.print("Enter the array Elements...");
	for(int i=0;i<n;i++){
	arr[i]=s.nextInt();
	}
	System.out.print("Enter the array Element to replace...:");
	int old_element= s.nextInt();
	for(int i=0;i<n;i++){
	
	
	 if(old_element==arr[i]){
	System.out.print("Enter the  replace array Element...:");
	int new_element= s.nextInt();
	arr[i]=new_element;
	flag+=1;
	}
	
	
	}
	if(flag==0){
	
	System.out.println(" The array Element is not found...");
	}
	
	
System.out.print("The array Elements...");
	for(int i=0;i<n;i++){
	System.out.print(arr[i]+"\t");
	}
}
}
