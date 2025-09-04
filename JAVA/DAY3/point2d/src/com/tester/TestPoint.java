package com.tester;
import java.util.Scanner;

import com.developers.geometry.Point2D;

public class TestPoint {

    /*
        6. Optional assignment - Do it in IDE

        6.1 Copy  earlier Point2D class .

        6.2    Create a driver / tester   class(for UI)  , in the "tester" package "TestPoints" , with main(..)

            1. Prompt user , how many points to plot?
            Create suitable array. (Hint : array of references)

            2. Show following options

            Options :
            1. Plot a point
            Inputs : array index , x  ,y
            Check boundary conditions  & also check if some point is already plotted at the same index , if not then store the point details.
            In case of any errors , display suitable error message.

            2.   Display x,y co-ordinates of all the points plotted so far ,using for-each loop.

            0. Exit

     */
    public static void main(String[] args){

        Scanner sc = new Scanner(System.in);
        System.out.println("Enter how many points to plot");
        Point2D point[] = new Point2D[sc.nextInt()];

        System.out.println("==========Point Options==========");

        boolean flag=false;
        while(!flag) {
            System.out.println("Enter 1: Plot a point   2: Display x,y co-ordinates " +
                    "of all the points plotted so far ,using for-each loop   0: Exit");
            int choice = sc.nextInt();
            switch (choice) {
                case 1:
                    System.out.println("Enter the position in point array where you want to plot point");
                    int pos = sc.nextInt();
                    if (pos < 1 || pos > point.length) {
                        System.out.println("Please enter a value between 1 and " + (point.length));
                    }
                    else {
                        if (point[pos - 1] == null) {
                            System.out.println("Enter co-ordinates x and y to plot point");
                            point[pos - 1] = new Point2D(sc.nextInt(), sc.nextInt());

                        } else {
                            System.out.println("Point already plotted at " + pos + " position");
                        }
                    }
                    break;
                case 2:
                    System.out.println("Coordinates of points plotted so far");
                    for(Point2D p : point) {
                        if (p != null) {
                            System.out.println(p.show());
                        }
                    }
                    break;
                case 0:
                    flag = true;
                    break;
                default:
                    System.out.println("Invalid choice");
                    break;

            }
        }
        sc.close();
    }

}
