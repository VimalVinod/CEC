import javax.swing.*;
import java.awt.*;
import java.awt.event.MouseAdapter;
import java.awt.event.MouseEvent;

public class Mouse extends JFrame {
    private JLabel label;

    public Mouse() {
        setTitle("Mouse Event Example");
        setSize(400, 300);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLayout(new BorderLayout());

        label = new JLabel("Mouse events will be displayed here.", SwingConstants.CENTER);
        label.setFont(new Font("Arial", Font.PLAIN, 16));
        add(label, BorderLayout.CENTER);

        label.addMouseListener(new MouseAdapter() {
            
            public void mouseClicked(MouseEvent e) {
                label.setText("Mouse Clicked at: (" + e.getX() + ", " + e.getY() + ")");
                System.out.println("Mouse Clicked at: (" + e.getX() + ", " + e.getY() + ")");
            }

      
            public void mousePressed(MouseEvent e) {
                label.setText("Mouse Pressed at: (" + e.getX() + ", " + e.getY() + ")");
                 System.out.println("Mouse Pressed at: (" + e.getX() + ", " + e.getY() + ")");
            }

            
            public void mouseReleased(MouseEvent e) {
                label.setText("Mouse Released at: (" + e.getX() + ", " + e.getY() + ")");
                 System.out.println("Mouse Released at: (" + e.getX() + ", " + e.getY() + ")");
            }

         
            public void mouseEntered(MouseEvent e) {
                label.setText("Mouse Entered the Label");
                System.out.println("Mouse Entered the Label");
            }

            
            public void mouseExited(MouseEvent e) {
                label.setText("Mouse Exited the Label");
                System.out.println("Mouse Exited the Label");
            }
        });
    }

    public static void main(String[] args) {
        Mouse example = new Mouse();
        example.setVisible(true);
    }
}

