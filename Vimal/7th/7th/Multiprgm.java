class odd extends Thread{
public void run()
{
System.out.print("ODD NUMBER:");
for(int i= 1;i<=100;i=i+2){
System.out.print("\t" +i);
}
}
}
class even extends Thread{
public void run()
{
System.out.print("\nEVEN NUMBER:");
for(int i= 2;i<=100;i=i+2){
System.out.print("\t" +i);
}
}
}
class Multiprgm{
public static void main(String []args) throws Exception{
odd o=new odd();
o.start();
o.join();
new even().start();
}
}
