import java.util.Arrays;

public class MethodOverriding {
    public static void main(String[] args) {
        int[] inputArray = {11, 20, 31, 40, 51, 60, 71, 80, 91, 100};

        int[] evenArray = getEvenArray(inputArray);
        int[] oddArray = getOddArray(inputArray);

        System.out.println("Original Array: " + Arrays.toString(inputArray));
        System.out.println("Even Array: " + Arrays.toString(evenArray));
        System.out.println("Odd Array: " + Arrays.toString(oddArray));

        int[][] matrix = {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}
        };

        int[][] transposeMatrix = transposeMatrix(matrix);
        System.out.println("Original Matrix:");
        printMatrix(matrix);
        System.out.println("Transpose Matrix:");
        printMatrix(transposeMatrix);
    }

    // Method to put even elements of an array in a separate array
    public static int[] getEvenArray(int[] arr) {
        int count = 0;
        for (int num : arr) {
            if (num % 2 == 0) {
                count++;
            }
        }

        int[] evenArray = new int[count];
        int index = 0;
        for (int num : arr) {
            if (num % 2 == 0) {
                evenArray[index++] = num;
            }
        }

        return evenArray;
    }

    
    public static int[] getOddArray(int[] arr) {
        int count = 0;
        for (int num : arr) {
            if (num % 2 != 0) {
                count++;
            }
        }

        int[] oddArray = new int[count];
        int index = 0;
        for (int num : arr) {
            if (num % 2 != 0) {
                oddArray[index++] = num;
            }
        }

        return oddArray;
    }

   
    public static int[][] transposeMatrix(int[][] matrix) {
        int rows = matrix.length;
        int cols = matrix[0].length;

        int[][] transpose = new int[cols][rows];

        for (int i = 0; i < cols; i++) {
            for (int j = 0; j < rows; j++) {
                transpose[i][j] = matrix[j][i];
            }
        }

        return transpose;
    }

  
    public static void printMatrix(int[][] matrix) {
        for (int[] row : matrix) {
            System.out.println(Arrays.toString(row));
        }
    }
}
