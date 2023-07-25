import java.util.*;
public class lexicographic {
    public static void main(String[] args) {
        System.out.println("Enter five names: ");
        String array[] = new String[5];       // Declaration of string array
        Scanner sc = new Scanner(System.in);
        for (int i = 0; i < 5; i++) {
            array[i] = sc.nextLine();
        }
        Arrays.sort(array);
        System.out.print("Sorted list is: ");
        for (int i = 0; i < 5; i++) {
            System.out.print(array[i] + " ");
        }
    }
}
