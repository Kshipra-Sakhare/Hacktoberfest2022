import java.util.*;
public class constructor {
    
    private int real, img;

    public constructor(int x, int y) {
        real = x;
        img = y;
    }

    public void add(constructor x, constructor y) {
        real = x.real + y.real;
        img = x.img + y.img;
    }

    public void display() {
        System.out.println("Addition of complex numbers:");
        System.out.println(real + "+" + img + "i");
    }

}

class constructorop {
    public static void main(String[] args) {

        int real, img;

        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the real number:");
        real = sc.nextInt();
        System.out.println("Enter the imaginary number:");
        img = sc.nextInt();
        System.out.println("Real and imaginary value:");
        System.out.println("real=" + real);
        System.out.println("img=" + img);

        constructor c1 = new constructor(real, img);

        System.out.println("Enter the real number:");
        real = sc.nextInt();
        System.out.println("Enter the imaginary number:");
        img = sc.nextInt();
        System.out.println("Real and imaginary value:");
        System.out.println("real=" + real);
        System.out.println("img=" + img);

        constructor c2 = new constructor(real, img);

        constructor c3 = new constructor(0, 0);
        c3.add(c1, c2);
        c3.display();
    }
}
