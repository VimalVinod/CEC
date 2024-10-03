import java.util.Scanner;
public class slarg
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
int l=arr[0];
int sl=-1;
for(int i=0;i<n;i++){
if(arr[i]>l)
l=arr[i];
for(i=0;i<n;i++){

if(arr[i]!=l){
if(sl==-1){
sl=arr[i];}
else if (arr[i]>sl){
sl=arr[i];
}
}
}
}
System.out.print("Second largest array elements\t" + sl);
}
}
