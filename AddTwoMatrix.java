import java.util.Scanner;

public class AddTwoMatrices {

    public static int[][] sum(int a[][], int b[][]) 
{
        int row = a.length;
        int col = a[0].length;
        int[][] result = new int[row][col];

        for (int i = 0; i < row; i++) 
        {
            for (int j = 0; j < col; j++) 
            {
                result[i][j] = b[i][j] + a[i][j];
            }
        }

        return result;
    }

    public static void main(String[] args) 
{
        Scanner ed = new Scanner(System.in);
        int row, col, i, j;

        System.out.println("Enter number of rows");
        row = ed.nextInt();
        System.out.println("Enter number of columns");
        col = ed.nextInt();

        int[][] a = new int[row][col];
        int[][] b = new int[row][col];

        System.out.println("Enter first matrix");
        for (i = 0; i < row; i++) 
        {
            for (j = 0; j < col; j++) 
            {
                a[i][j] = ed.nextInt();
            }
        }

        System.out.println("Enter Second matrix");
        for (i = 0; i < row; i++) 
        {
            for (j = 0; j < col; j++) 
            {
                b[i][j] = ed.nextInt();
            }
        }

        int[][] sum = sum(a, b);

        System.out.println("Sum of two matrices:");
        for (i = 0; i < row; i++) 
        {
            for (j = 0; j < col; j++) 
            {
                System.out.print(sum[i][j] + " ");
            }
            System.out.print("\n");
        }
    }
}
