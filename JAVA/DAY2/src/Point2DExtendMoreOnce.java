import java.util.Scanner;
public class Point2DExtendMoreOnce {
    
    /*
     * 4.5 Create a separate Driver(main)  class(for UI ),
     *     "TestPoint" , with main(..)
     * 4.6  Accept x,y co-ordinates for 2 points & store the co-ordinates
     * 4.7  Display x,y co-ordinates of both of the points plotted  (using show() method)
     */
        
        private int x;
        private int y;

        Point2DExtendMoreOnce(int x, int y){
            this.x=x;
            this.y=y;
            System.out.println("Parameterized constructor called");
        }
        public String show(Point2DExtendMoreOnce p){
            System.out.println("Show method called by instance of Point2DExtendMoreOnce class");
            return "Point X of Point 1 and 2: "+this.x+" "+p.x +"  &&  Point Y Point 1 and 2: "+this.y+" "+p.y;
            
        }
        public boolean isEqual(){
            if(this.x==this.y){
                return true;
            }            
            else {
                return false;
            }
        }
        public void calculateDistance(Point2DExtendMoreOnce p){
            System.out.println("Inside calculateDistance method");
            //distance formula sqrt of (x1-x2) ka whole square plus (y1-y2) ka whole square
            System.out.println(Math.sqrt((Math.pow((this.x-p.x), 2)+Math.pow((this.y-p.y), 2))));
        }
}

class Main{
    public static void main(String[] arg){
            Scanner sc = new Scanner(System.in);
            System.out.println("Enter coordinates X and Y for two points");
            Point2DExtendMoreOnce p = new Point2DExtendMoreOnce(sc.nextInt(), sc.nextInt());
            Point2DExtendMoreOnce p1 = new Point2DExtendMoreOnce(sc.nextInt(), sc.nextInt());
            System.out.println(p.show(p1));
            System.out.println("Both Points are equal : "+p.isEqual());
            System.out.println("Both Points are equal : "+p1.isEqual());
            p.calculateDistance(p1);
    }
}
