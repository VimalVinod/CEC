import java.io.*;
public class copy{
public static void main(String []args)
{
try
{
FileInputStream f1 =new FileInputStream("sample.txt");
FileOutputStream f2 =new FileOutputStream("copy.txt");

int ch;

while((ch=f1.read())!=-1){
f2.write((char)ch);

}
f1.close();
f2.close();
}
catch (FileNotFoundException e) {
System.out.print("File not found" + e.getMessage());
}
catch (IOException e) {
System.out.print("Error reading file" + e.getMessage());
}
System.out.print("File Copied!!!");
}
}
