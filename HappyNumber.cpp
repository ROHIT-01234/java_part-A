import java.util.*;
interface yes {
    int check(int num);
}

class Happy implements yes {
    public int check(int num) {
        int rem = 0, sum = 0;
        // calculate the sum of squares of each digit
        while (num > 0) {
            rem = num % 10;
            sum = sum + (rem * rem);
            num = num / 10;
        }
        return sum;
    }
}

public class happy_number {
    public static void main(String[] args) {
        Happy obj = new Happy();
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int num = sc.nextInt();
        int finalVal = num;
        while (finalVal != 1 && finalVal != 4) {
            finalVal = obj.check(finalVal);
        }
        if (finalVal == 1) {
            System.out.println(num + " is a Happy Number");
        }
        else {
            System.out.println(num + " is not a Happy Number");
        }
    }
}
