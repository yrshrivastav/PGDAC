import java.util.Scanner;

public class Point2DExtendMore {
    /*
     *  4.4 Add a non static method , calculateDistance , to calc distance between 2 points
            Hint : use distance formula.

            Hint - Ask yourself - 
            How will you invoke it from the tester ?

     */

     private int x;
        private int y;

        Point2DExtendMore(int x, int y){
            this.x=x;
            this.y=y;
            System.out.println("Parameterized constructor called");
        }
        public String show(){
            System.out.println("Show method called by instance of Point2DExtendMore class");
            return "Point X : "+this.x +" Point Y : "+this.y;
            
        }
        public boolean isEqual(){
            if(this.x==this.y){
                return true;
            }            
            else {
                return false;
            }
        }
        public void calculateDistance(Point2DExtendMore p){
            System.out.println("Inside calculateDistance method");
            //distance formula sqrt of (x1-x2) ka whole square plus (y1-y2) ka whole square
            System.out.println(Math.sqrt((Math.pow((this.x-p.x), 2)+Math.pow((this.y-p.y), 2))));
        }

        public static void main(String[] args){
            Scanner sc = new Scanner(System.in);
            System.out.println("Enter coordinates X and Y for two points");
            Point2DExtendMore p = new Point2DExtendMore(sc.nextInt(), sc.nextInt());
            Point2DExtendMore p1 = new Point2DExtendMore(sc.nextInt(), sc.nextInt());
            System.out.println(p.show());
            System.out.println(p1.show());
            System.out.println("Both Points are equal : "+p.isEqual());
            System.out.println("Both Points are equal : "+p1.isEqual());
            p.calculateDistance(p1);
            sc.close();
        }
}
