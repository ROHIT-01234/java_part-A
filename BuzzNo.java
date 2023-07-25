import java.util.*;

interface X {
    public void buzz(int n);
}

interface Y {
    public void duplicate();
}

public class Buzzno implements Y {
    int frequency = 0; // Declare and initialize the frequency variable.

    public void buzz(int n) {
        int rem = n % 10;
        if (rem == 7 || n % 7 == 0) {
            System.out.println("A Buzz Number.");
        } else {
            System.out.println("Not A Buzz Number.");
        }
    }

    public void duplicate() {
        int arr[] = { 9, 6, 5, 47, 2, 2, 4, 9, 4, 3, 7 };
        for (int i = 0; i < arr.length - 1; i++) {
            for (int j = i + 1; j < arr.length; j++) {
                if (arr[i] == arr[j]) {
                    frequency++;
                }
            }
        }
        System.out.println("Duplicate Frequency in Array is " + frequency);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int n = sc.nextInt();
        Buzzno obj = new Buzzno();
        obj.buzz(n);
        obj.duplicate();
    }
}
