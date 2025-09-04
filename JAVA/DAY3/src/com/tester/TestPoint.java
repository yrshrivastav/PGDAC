package com.tester;
import java.util.Scanner;

public class TestPoint {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Coordinates of X and Y");
        Point2D p1 = new Point2D(sc.nextInt(), sc.nextInt());
        Point2D p2 = new Point2D(sc.nextInt(), sc.nextInt());
        System.out.println(p1.show(p2));
        System.out.println("Both Points are equal : "+p1.isEqual());
        System.out.println("Both Points are equal : "+p2.isEqual());
        p1.calculateDistance(p2);
        sc.close();
    }
}
