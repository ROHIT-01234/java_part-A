import java.util.*;
public class password_generator {
    public static void main(String args[]) {
        int rno, sum = 0, temp;
        long ph;
        String pw = new String();
        String name;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the Room Number");
        rno = sc.nextInt();
        int rno1 = rno;
        System.out.println("Enter the Mobile Number");
        ph = sc.nextLong();
        System.out.println("Enter the Name");
        name = sc.next();
        char sym[] = { ')', '@', '#', '$', '%', '^', '!', '&', '(', '*' };
        while(rno != 0) {
            while (rno != 0) {
                temp = rno % 10;
                sum = sum + temp;
                rno = rno / 10;
            }
            if (sum >= 10) {
                rno = sum;
                sum = 0;
            }
        }
        int c = rno1 / 100;
        int len = name.length();
        System.out.println("Password is: ");
        pw = "" + name.charAt(0) + (ph % 10) + sum + sym[c] + name.charAt(len - 1);
        System.out.println(pw);
    }
}
