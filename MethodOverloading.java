import java.util.*;
public class method_overloading
{
    public void add(int a, int b)
    {
        int sum = a + b;
        System.out.println("Sum of two integers: " + sum);
    }

    public void add(double a, double b)
    {
        double sum = a + b;
        System.out.println("Sum of two doubles: " + sum);
    }

    public void add(String a, String b)
    {
        String result = a + b;
        System.out.println("Concatenation of two strings: " + result);
    }

    public static void main(String[] args)
    {
        method_overloading example = new method_overloading();
        // Call the add() method with different argument types
        example.add(5, 10);
        example.add(3.5, 2.8);
        example.add("Hello, ", "world!");
    }
}
