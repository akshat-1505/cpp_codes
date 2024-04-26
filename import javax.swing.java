import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
public class projectdemo {
class Stack {
    private int maxSize;
    private int[] stackArray;
    private int top;

    public Stack(int size) {
        maxSize = size;
        stackArray = new int[maxSize];
        top = -1;
    }

    public void push(int value) {
        if (top == maxSize - 1) {
            JOptionPane.showMessageDialog(null, "Stack is full. Cannot push more elements.", "Error", JOptionPane.ERROR_MESSAGE);
            return;
        }
        stackArray[++top] = value;
        JOptionPane.showMessageDialog(null, value + " pushed to stack.", "Success", JOptionPane.INFORMATION_MESSAGE);
    }

    public int pop() {
        if (top == -1) {
            JOptionPane.showMessageDialog(null, "Stack is empty. Cannot pop.", "Error", JOptionPane.ERROR_MESSAGE);
            return -1;
        }
        int popped = stackArray[top--];
        JOptionPane.showMessageDialog(null, popped + " popped from stack.", "Success", JOptionPane.INFORMATION_MESSAGE);
        return popped;
    }
}

public class StackUI {
    private Stack stack;
    private JTextField textField;
    private JTextArea textArea;

    public StackUI(int size) {
        stack = new Stack(size);

        JFrame frame = new JFrame("Stack Operations");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(400, 300);

        JPanel panel = new JPanel();
        panel.setLayout(new GridLayout(3, 1));

        textField = new JTextField(10);
        JButton pushButton = new JButton("Push");
        JButton popButton = new JButton("Pop");
        textArea = new JTextArea();
        JScrollPane scrollPane = new JScrollPane(textArea);

        pushButton.addActionListener(new PushListener());
        popButton.addActionListener(new PopListener());

        panel.add(textField);
        panel.add(pushButton);
        panel.add(popButton);

        frame.add(panel, BorderLayout.NORTH);
        frame.add(scrollPane, BorderLayout.CENTER);

        frame.setVisible(true);
    }

    class PushListener implements ActionListener {
        public void actionPerformed(ActionEvent e) {
            String input = textField.getText();
            if (!input.isEmpty()) {
                int value = Integer.parseInt(input);
                stack.push(value);
                textField.setText("");
            } else {
                JOptionPane.showMessageDialog(null, "Please enter a value to push.", "Error", JOptionPane.ERROR_MESSAGE);
            }
        }
    }

    class PopListener implements ActionListener {
        public void actionPerformed(ActionEvent e) {
            int popped = stack.pop();
            if (popped != -1) {
                textArea.append(popped + " popped from stack.\n");
            }
        }
    }

    public static void main(String[] args) {
        SwingUtilities.invokeLater(() -> new StackUI(10));
    }
}
}