import java.io.*;
public class file{
public static void main(String []args)
{
try(FileInputStream f =new FileInputStream("sample.txt"))
{
int lineNumber =1;
int line;
System.out.print(lineNumber + ":");
while((line=f.read())!=-1){
System.out.print((char)line);
if(line =='\n' && f.available()>0){
lineNumber++;
System.out.print(lineNumber + ":");
}
}
f.close();
}
catch (FileNotFoundException e) {
System.out.print("File not found" + e.getMessage());
}
catch (IOException e) {
System.out.print("Error reading file" + e.getMessage());
}
}
}
