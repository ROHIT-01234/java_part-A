import java.util.Scanner;

public class SquareMatrix {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the value of 'n' for n-square matrix: ");
        int n = scanner.nextInt();

        if (n <= 0) {
            System.out.print("Please enter a positive integer for 'n'.");
        } else {
            int totalSquares = calculateTotalSquares(n);
            System.out.println("Total number of squares in the " + n + "-square matrix: " + totalSquares);
        }

        scanner.close();
    }

    private static int calculateTotalSquares(int n) {
        return n * (n + 1) * (2 * n + 1) / 6;
    }
}
