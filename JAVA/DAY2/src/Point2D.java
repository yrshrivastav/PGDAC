import java.util.Scanner;
public class Point2D {
    /*
     * 
            4   Create a  class Point2D   for representing a point in x & y(int) co-ordinate system.
                (Tight encapsulation please !)

            4.1 Create a parameterized constructor to accept x & y co-ords.

            4.2 Add  show() method  --to return point's x & y co-ords

     */
        private int x;
        private int y;

        Point2D(int x, int y){
            this.x=x;
            this.y=y;
            System.out.println("Parameterized constructor called");
        }
        public String show(){
            System.out.println("Show method called by instance of Point2D class");
            return "Point X : "+this.x +" Point Y : "+this.y;
            
        }

        public static void main(String[] args){
            Scanner sc = new Scanner(System.in);
            System.out.println("Enter coordinates X and Y");
            Point2D p = new Point2D(sc.nextInt(), sc.nextInt());
            System.out.println(p.show());
            sc.close();
        }
    
}
