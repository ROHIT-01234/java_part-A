import java.util.*;
public class binary_search {
    int binarySearch(int arr[], int low, int high, int x) {
        if (high >= low) {
            int mid = low+(high-low)/2;
            if (arr[mid] == x)
                return mid+1;
            else if (arr[mid] > x)
                return binarySearch(arr, low, mid-1, x);
            else
                return binarySearch(arr, mid+1, high, x);
        }
        return -1;
    }
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        binary_search ob = new binary_search();
        int arr[] = { 10, 20, 30, 40, 50 };
        int n = arr.length;
        System.out.print("Array:");
        for(int element:arr)
        {
            System.out.print(element+" ");
        }
        System.out.print("\n");
        System.out.print("Enter the element you want to find:");
        int x = sc.nextInt();
        int result = ob.binarySearch(arr, 0, n - 1, x);
        if (result == -1)
            System.out.println("Element is not present in array");
        else
            System.out.println("Element is present at index " + result);
    }
}
