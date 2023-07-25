import java.util.*;
public class sumofdigit {
    public static void main(String[] args) {
        int num, temp, sum = 0;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number");
        num = sc.nextInt();
        while (num != 0) {
            while (num != 0) {
                temp = num % 10;
                sum = sum + temp;
                num = num/10;
            }
            if (sum >= 10) {
                System.out.println("Sum " + sum);
                num = sum;
                sum = 0;
            }
        }
        System.out.println("Sum in single digit is: "+ sum);
    }
}
