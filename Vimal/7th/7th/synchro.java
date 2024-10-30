class Table {
    synchronized void printTable(int n) {
        for (int i = 1; i <= 10; i++) {
            System.out.println(n + " * " + i + " = " + (n * i));
            try {
                // Adding a small sleep to visualize the output more clearly
                Thread.sleep(100);
            } catch (InterruptedException e) {
                System.out.println(e);
            }
        }
    }
}

class A extends Thread {
    Table t;

    A(Table t) {
        this.t = t;
    }

    public void run() {
        t.printTable(5);
    }
}

class B extends Thread {
    Table t;

    B(Table t) {
        this.t = t;
    }

    public void run() {
        t.printTable(6);
    }
}

public class synchro {
    public static void main(String[] args) {
        Table table = new Table();
        A thread1 = new A(table);
        B thread2 = new B(table);

        thread1.start();
        thread2.start();

        
        try {
            thread1.join();
            thread2.join();
        } catch (InterruptedException e) {
            System.out.println(e);
        }
    }
}

