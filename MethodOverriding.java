import java.util.*;

public class Even_Odd {
    public void transpose() {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter row size of the first matrix:");
        int r = sc.nextInt();
        System.out.println("Enter column size of the first matrix:");
        int c = sc.nextInt();
        int m[][] = new int[r][c];
        int i, j;
        System.out.println("Enter the matrix elements:");
        for (i = 0; i < r; i++) {
            for (j = 0; j < c; j++) {
                m[i][j] = sc.nextInt();
            }
        }
        int t[][] = new int[c][r];
        for (i = 0; i < r; i++) {
            for (j = 0; j < c; j++) {
                t[j][i] = m[i][j];
            }
        }
        System.out.println("Matrix:");
        for (i = 0; i < r; i++) {
            for (j = 0; j < c; j++) {
                System.out.print(m[i][j] + " ");
            }
            System.out.println();
        }
        System.out.println("Transpose:");
        for (i = 0; i < c; i++) {
            for (j = 0; j < r; j++) {
                System.out.print(t[i][j] + " ");
            }
            System.out.println();
        }
    }

    public static class EvenOdd extends Even_Odd {
        @Override
        public void transpose() {
            super.transpose();
            int a[] = {18, 89, 25, 34, 65, 27, 64};
            System.out.println("Odd numbers are:");
            for (int i = 0; i < a.length; i++) {
                if (a[i] % 2 != 0) {
                    System.out.print(a[i] + " ");
                }
            }
            System.out.println("\nEven numbers are:");
            for (int i = 0; i < a.length; i++) {
                if (a[i] % 2 == 0) {
                    System.out.print(a[i] + " ");
                }
            }
        }
    }

    public static void main(String[] args) {
        EvenOdd k = new EvenOdd();
        k.transpose();
    }
}
