import java.util.Scanner;

public class PyramidPattern {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the number of rows for the pyramid: ");
        int rows = scanner.nextInt();

        printPyramidPattern(rows);

        scanner.close();
    }

    public static void printPyramidPattern(int rows) {
        for (int i = 1; i <= rows; i++) {
            // Print leading spaces
            for (int j = 1; j <= rows - i; j++) {
                System.out.print("  ");
            }

            // Print numbers in ascending order
            for (int k = i; k <= 2 * i - 1; k++) {
                System.out.print(k + " ");
            }

            // Print numbers in descending order
            for (int l = 2 * i - 2; l >= i; l--) {
                System.out.print(l + " ");
            }

            System.out.println();
        }
    }
}

