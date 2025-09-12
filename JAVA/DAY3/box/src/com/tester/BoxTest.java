package com.tester;
import java.util.Scanner;
import com.developer.Box;
class TestBox
{

//    5. Can you use for-each loop , to double box widths for the boxes having volume < 100 ?
    public static void main(String[] args) {
        //create scanner class instance to wrap console i/public
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the size of the box array");
        Box box[] = new Box[sc.nextInt()];

        int lengthCounter=box.length-1;

        while(lengthCounter>=0) {

            System.out.println("Enter the position in box array where you want to store box");
            int pos = sc.nextInt();
            if (pos < 1 || pos > box.length) {
                System.out.println("Please enter a value between 0 and " + (box.length - 1));
            } else {
                if (box[pos - 1] == null) {
                    System.out.println("Enter dimensions of a box");
                    box[pos - 1] = new Box(sc.nextDouble(), sc.nextDouble(), sc.nextDouble());
                    //System.out.println("Before width update " + box[pos - 1].getBoxDimensions());
                    lengthCounter--;
                } else {
                    System.out.println("Box already created at " + pos + " position");
                }
            }
        }
        for(Box b : box){
            System.out.println("Before width update "+b.getBoxDimensions());
        }
        for(Box b : box){
            if(b.getVolume()<100){
                b.setWidth(b.getWidth()*2);
            }
        }
        for(Box b : box){
            System.out.println("After width update "+b.getBoxDimensions());
        }

        sc.close();
    }
}