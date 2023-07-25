import java.util.*;
interface motar1 {
    int speed = 90;
    public void distance();
}
interface motar2 {
    int distance = 200;
    public void speed();
}

class Vehicle implements motar1, motar2 {
    public void distance() {
        int distance = speed * 100;
        System.out.println("Distance is: " + distance);
    }

    public void speed() {
        int speed = distance / 100;
        System.out.println("Speed is: " + speed);
    }
}

public class multiple_inheritance {
    public static void main(String[] args) {
        Vehicle obj = new Vehicle();
        obj.distance();
        obj.speed();
    }
}
