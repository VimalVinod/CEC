import java.util.*;

abstract class shapes{
abstract void show();
}

class Triangle extends shapes{
void show()
{
System.out.print("Triangle have 3 sides");
}
}

class Square extends shapes{
void show()
{
System.out.print("Square have 4 sides");
}
}

class Hexagon extends shapes{
void show()
{
System.out.print("Hexagon have 6 sides");
}
}
class shape{
public static void main(String []args){
int op=0;
Scanner sc = new Scanner(System.in);
shapes t =new Triangle();
shapes s =new Square();
shapes h =new Hexagon();
while(op!=3){
System.out.println("Shapes");
System.out.println("1.Triangle\t"+ "2.Square\t"+ "3.Hexagon");
System.out.print("Enter Your choice:..");
 op=sc.nextInt();

if (op==1)
t.show();
else if (op==2)
s.show();
else if(op==3)
h.show();
else
System.out.print("Invalid choice");
}


}
}

